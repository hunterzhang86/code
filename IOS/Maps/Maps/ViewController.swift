//
//  ViewController.swift
//  Maps
//
//  Created by Hunter on 14/12/12.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit
import CoreLocation
import MapKit

class ViewController: UIViewController, CLLocationManagerDelegate {
   
    @IBOutlet var myMap: MKMapView!

    @IBAction func findMe(sender: AnyObject) {
        
        manager.requestWhenInUseAuthorization()
        manager.startUpdatingLocation()
        
    }
    
    @IBOutlet var latitude: UILabel!
    @IBOutlet var longtitude: UILabel!
    @IBOutlet var heading: UILabel!
    @IBOutlet var speed: UILabel!
    @IBOutlet var altitude: UILabel!
    @IBOutlet var address: UILabel!

    var manager: CLLocationManager!

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        manager = CLLocationManager()
        manager.delegate = self
        manager.desiredAccuracy = kCLLocationAccuracyBest
        
        if activePlace == -1 {
            
            manager.requestWhenInUseAuthorization()
            manager.startUpdatingLocation()
            
        } else {
        
            let lat = NSString(string: places[activePlace]["lat"]!).doubleValue
        
            let lon = NSString(string: places[activePlace]["lon"]!).doubleValue
        
            var latitude:CLLocationDegrees = lat
            var longtitude:CLLocationDegrees = lon
            
            var latDelata:CLLocationDegrees = 0.01
            var lonDelata:CLLocationDegrees = 0.01
        
            var span: MKCoordinateSpan = MKCoordinateSpanMake(latDelata, lonDelata)
        
            var location: CLLocationCoordinate2D = CLLocationCoordinate2DMake(latitude, longtitude)
            
            var region: MKCoordinateRegion = MKCoordinateRegionMake(location, span)
        
            myMap.setRegion(region, animated: true)
            
            var annotation = MKPointAnnotation()
            
            annotation.coordinate = location
            
            annotation.title = places[activePlace]["name"]
            
            myMap.addAnnotation(annotation)
        
        }
        
        var uilpgr = UILongPressGestureRecognizer(target: self, action: "action:")  //这里的冒号一定是需要的
        
        uilpgr.minimumPressDuration = 2.0
        
        myMap.addGestureRecognizer(uilpgr)




    }
    
    func action(gestureRcognizer: UIGestureRecognizer) {
        
        if gestureRcognizer.state == UIGestureRecognizerState.Began {
        
        
        var touchPoint = gestureRcognizer.locationInView(self.myMap)
        
        var newCoodinate = myMap.convertPoint(touchPoint, toCoordinateFromView: self.myMap)
        
        
        var loc = CLLocation(latitude: newCoodinate.latitude, longitude: newCoodinate.longitude)
        
        CLGeocoder().reverseGeocodeLocation(loc, completionHandler:{(placemarks, error) in
            
            if error != nil { println(error) }
            else {
                
                let p = CLPlacemark(placemark: placemarks[0] as CLPlacemark)
                
                var subThoroughfare: String
                var thoroughfare: String
                
                if (p.subThoroughfare != nil) {
                    
                    subThoroughfare = p.subThoroughfare
                    
                } else {
                    subThoroughfare = ""
                }
                
                if (p.thoroughfare != nil) {
                    thoroughfare = p.thoroughfare
                    
                } else {
                    thoroughfare = ""
                }
            
                
                var annotation = MKPointAnnotation()
                
                annotation.coordinate = newCoodinate
                
                var title = "\(p.subThoroughfare) \(p.thoroughfare)"
                
                if title == " " {
                    
                    title = "Unknown Location added !"
                    
                }
                
                annotation.title = title
                
                self.myMap.addAnnotation(annotation)
                
                places.append(["name": title, "lat": "\(newCoodinate.latitude)", "lon": "\(newCoodinate.longitude)"])

                
            }
            
        })
            
        }
        
    }
    
    override func viewWillDisappear(animated: Bool) {
        
        self.navigationController?.navigationBarHidden = false
        
    }
    
    func locationManager(manager: CLLocationManager!, didUpdateLocations locations: [AnyObject]!) {

        var userLocation: CLLocation = locations[0] as CLLocation
        
        var latitude:CLLocationDegrees = userLocation.coordinate.latitude
        var longtitude:CLLocationDegrees = userLocation.coordinate.longitude
        
        var latDelata:CLLocationDegrees = 0.01
        var lonDelata:CLLocationDegrees = 0.01
        
        var span: MKCoordinateSpan = MKCoordinateSpanMake(latDelata, lonDelata)
        
        var location: CLLocationCoordinate2D = CLLocationCoordinate2DMake(latitude, longtitude)
        
        var region: MKCoordinateRegion = MKCoordinateRegionMake(location, span)
        
        myMap.setRegion(region, animated: true)
        
        manager.stopUpdatingLocation()


        CLGeocoder().reverseGeocodeLocation(userLocation, completionHandler:{(placemarks, error) in

            if error != nil { println(error) }
            else {

                let p = CLPlacemark(placemark: placemarks[0] as CLPlacemark)

                var subThoroughfare: String

                if (p.subThoroughfare != nil) {

                    subThoroughfare = p.subThoroughfare

                } else {
                    subThoroughfare = ""
                }

                self.address.text = "\(subThoroughfare) \(p.thoroughfare) \n \(p.subLocality) \n \(p.subAdministrativeArea) \n \(p.postalCode) \n \(p.country)"

            }

        })

    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


//
//  ViewController.swift
//  Where Am I
//
//  Created by Hunter on 14/12/12.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit
import CoreLocation

class ViewController: UIViewController, CLLocationManagerDelegate {

    
    @IBOutlet var myMap: MKMapView!
    
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
        manager.requestWhenInUseAuthorization()
        manager.startUpdatingLocation()
        
    }
    
    func locationManager(manager: CLLocationManager!, didUpdateLocations locations: [AnyObject]!) {
        
        var userLocation: CLLocation = locations[0] as CLLocation
        
        latitude.text = "\(userLocation.coordinate.latitude)"
        longtitude.text = "\(userLocation.coordinate.longitude)"
        
        heading.text = "\(userLocation.course)"
        speed.text = "\(userLocation.speed)"
        altitude.text = "\(userLocation.altitude)"
        
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


//
//  ViewController.swift
//  What's The Weather
//
//  Created by Hunter on 14/12/11.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit
//import Foundation

class ViewController: UIViewController {

    @IBOutlet var city: UITextField!
    @IBOutlet var message: UILabel!
    
    @IBAction func buttonPressed(sender: AnyObject) {
        
        self.view.endEditing(true)
        
        var urlString = "http://www.weather-forecast.com/locations/" + city.text.stringByReplacingOccurrencesOfString(" ", withString: "") + "/forecasts/latest"
        
        var url = NSURL(string: urlString)
        
        let task = NSURLSession.sharedSession().dataTaskWithURL(url!) { (data, response, error) in
            
            var urlContent = NSString(data: data, encoding: NSUTF8StringEncoding)
            
            let tempUrlContent: String = urlContent as String
            
            if tempUrlContent.rangeOfString("<span class=\"phrase\">") != nil {
                
                var contentArray = urlContent?.componentsSeparatedByString("<span class=\"phrase\">")
                
                var newContentArray = contentArray![1].componentsSeparatedByString("</span>")
                
                //加快加载速度
                dispatch_async(dispatch_get_main_queue()) {
                    
                    self.message.text = (newContentArray[0] as String).stringByReplacingOccurrencesOfString("&deg;", withString: "°")
                
                }
                
                
            } else {
                dispatch_async(dispatch_get_main_queue()) {
                    self.message.text = "输入城市名称错误，请重新输入。"
                }
                
            }
            

            
        }
        
        task.resume()
        
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


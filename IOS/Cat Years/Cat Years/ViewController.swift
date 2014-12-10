//
//  ViewController.swift
//  Cat Years
//
//  Created by Hunter on 14/12/9.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var catAge: UITextField!
    
    @IBOutlet weak var message: UILabel!
    
    
    @IBAction func buttonPressed(sender: AnyObject) {
        
        var age = catAge.text.toInt()
        
        if age != nil {
            
            age = age! * 7
            message.text = "Your cat is \(age!) years old"
            
        } else {
            
            message.text = "Please enter a number in the box"
        
        }

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


//
//  ViewController.swift
//  How Many Fingers
//
//  Created by Hunter on 14/12/9.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    @IBOutlet var guess: UITextField!
    
    @IBOutlet var message: UILabel!
    
    @IBAction func guessButton(sender: AnyObject) {
        
        var numberOfFingers = arc4random() % 10
        
        println(numberOfFingers)
        
        var numberOfFingersString = String(numberOfFingers)
        
        if numberOfFingersString == guess.text {
            
            message.text = "You are right !!!"
            
        } else {
            
            message.text = "You are false -- I was holding up \(numberOfFingers), please try again !!"
        
        }
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


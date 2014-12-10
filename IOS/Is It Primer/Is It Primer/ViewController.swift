//
//  ViewController.swift
//  Is It Primer
//
//  Created by Hunter on 14/12/9.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet var number: UITextField!
    @IBOutlet var message: UILabel!
    @IBAction func buttonPressed(sender: AnyObject) {
        
        var isPrime = true
        
        var Interger = number.text.toInt()
        
        if Interger != nil {
            
            if Interger < 1 {
                message.text = "请输入正整数"
            } else {
                if Interger == 1 {
                    message.text = "1不是素数"
                } else {
                    
                    for var i = 2; i < Interger; i++ {
                        if Interger! % i == 0 {
                            isPrime = false
                            break
                        }
                    }
                    
                    if isPrime {
                        message.text = "\(Interger!)是一个素数"
                    } else {
                        message.text = "\(Interger!)不是素数"
                    }
                }
            }
            
        } else {
            
            message.text = "请输入一个正整数。"
            
        }
        
        println(number.text)
        
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


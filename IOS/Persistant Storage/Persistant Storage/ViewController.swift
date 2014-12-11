//
//  ViewController.swift
//  Persistant Storage
//
//  Created by Hunter on 14/12/10.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        NSUserDefaults.standardUserDefaults().setObject("QIU", forKey: "Zhang")
        NSUserDefaults.standardUserDefaults().synchronize()
        println(NSUserDefaults.standardUserDefaults().objectForKey("Zhang")!)
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


//
//  ViewController.swift
//  Images
//
//  Created by Hunter on 14/12/11.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet var alien: UIImageView!
    
    var counter = 1
    
    var timer = NSTimer()

    @IBAction func buttonPressed(sender: AnyObject) {
        
        counter++
        
        if counter == 6 {
            counter = 1
        }
        
        alien.image = UIImage(named: "frame\(counter).png")
        
    }
    
    func result() {
        
        counter++
        if counter == 6 {
            counter = 1
        }
        alien.image = UIImage(named: "frame\(counter).png")
        
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        timer = NSTimer.scheduledTimerWithTimeInterval(0.1, target: self, selector: Selector("result"), userInfo: nil, repeats: true)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func viewDidLayoutSubviews() {
        
        //alien.alpha = 0 //消失到出现
        
        //alien.center = CGPointMake(alien.center.x - 400, alien.center.y)  //水平飘移进入
        
        //alien.frame = CGRectMake(100, 100, 0, 0)    //斜着飘移进入
        
    }
    
    override func viewDidAppear(animated: Bool) {
        
        UIView.animateWithDuration(1, animations: {
            
            //self.alien.center = CGPointMake(self.alien.center.x + 400, self.alien.center.y)
            
            //self.alien.alpha = 1
            
            //self.alien.frame = CGRectMake(100, 100, 100, 200)
            
        })
        
    }

}


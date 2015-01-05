//
//  ViewController.swift
//  ShakeAndSwipe
//
//  Created by Hunter on 14/12/16.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit
import AVFoundation

class ViewController: UIViewController {
    
    var player:AVAudioPlayer = AVAudioPlayer()
    
    var files = ["bean", "beich", "giggle", "snore", "static", "uuu"]

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.

    }
    
    // 摇晃手机
    
    override func motionEnded(motion: UIEventSubtype, withEvent event: UIEvent) {
        
        if event.subtype == UIEventSubtype.MotionShake {
            
            var randonNumber = Int(arc4random_uniform(UInt32(files.count)))
            
            var fileLocation = NSString(string: NSBundle.mainBundle().pathForResource("sounds/" + files[randonNumber], ofType: "mp3")!)
            
            var error: NSError? = nil
            
            player = AVAudioPlayer(contentsOfURL: NSURL(string: fileLocation), error: &error)
            
            player.play()
            
        }
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


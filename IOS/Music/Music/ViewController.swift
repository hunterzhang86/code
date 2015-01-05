//
//  ViewController.swift
//  Music
//
//  Created by Hunter on 14/12/16.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit
import AVFoundation

class ViewController: UIViewController {


    @IBAction func play(sender: AnyObject) {
        
        player.play()
        
    }
    
    
    @IBOutlet var volumeSlider: UISlider!
    
    
    @IBAction func changVolume(sender: AnyObject) {
        
        player.volume = volumeSlider.value
        
    }
    
    
    @IBAction func pause(sender: AnyObject) {
        
        player.pause()
        
    }
    
    @IBAction func stop(sender: AnyObject) {
        
        player.stop()
        player.currentTime = 0
        
    }
    
    
    var player: AVAudioPlayer = AVAudioPlayer()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        var fileLocation = NSString(string: NSBundle.mainBundle().pathForResource("naxienian", ofType: "mp3")!)
        
        var error: NSError? = nil
        
        player = AVAudioPlayer(contentsOfURL:  NSURL(string: fileLocation), error: &error)
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}


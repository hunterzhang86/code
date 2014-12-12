//
//  ViewController.swift
//  Tic Tac Toe
//
//  Created by Hunter on 14/12/11.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//
//注意在这个项目中tag不能有重复，否则App会闪退

import UIKit

class ViewController: UIViewController {
    
    var goNumber = 1
    
    var winner = 0
    
    // 0 = empty, 1 = nought, 2 = cross
    
    var gameState = [0, 0, 0, 0, 0, 0, 0, 0, 0]
    
    let winnningCombinations = [[0,1,2], [3,4,5], [6,7,8], [0,3,6], [1,4,7], [2,5,8], [0,4,8], [2,4,6]]
    
    @IBOutlet var button0: UIButton!
    
    @IBOutlet var label: UILabel!
    
    @IBOutlet var playAgain: UIButton!
    
    @IBAction func palyAgainPressed(sender: AnyObject) {
        
        goNumber = 1
        
        winner = 0
        
        gameState = [0, 0, 0, 0, 0, 0, 0, 0, 0]
        
        //label.center = CGPointMake(label.center.x - 400, label.center.y)  //貌似在这个版本的Xcode中label这样使用没有效果，label总是提前出现到屏幕中了
        
        label.alpha = 0
        
        playAgain.alpha = 0
        
        var button : UIButton
        
        for var i = 0; i < 9; i++ {
            
            button = view.viewWithTag(i) as UIButton
            button.setImage(nil, forState: .Normal)
            
        }
        
        
    }
    
    
    @IBAction func buttonPressed(sender: AnyObject) {
        
        if gameState[sender.tag] == 0 && winner == 0 {
            
            var image = UIImage()
            
            if goNumber % 2 == 0 {
                
                image = UIImage(named: "cross.png")!
                gameState[sender.tag] = 2
                
            } else {
                
                image = UIImage(named: "nought.png")!
                gameState[sender.tag] = 1
                
            }
            
            for combination in winnningCombinations {
                
                if gameState[combination[0]] == gameState[combination[1]] && gameState[combination[1]] == gameState[combination[2]] && gameState[combination[0]] != 0 {
                    
                    winner = gameState[combination[0]]
                    
                }
                
            }
            
            if winner != 0 {
                
                if winner == 1 {
                    
                    label.text = "Noughts has won!!"
                    
                } else {
                    
                    label.text = "Cross has won!!"
                    
                }
                
                UIView.animateWithDuration(0.4, animations: {
                    
                    //self.label.center = CGPointMake(self.label.center.x + 400, self.label.center.y)
                    
                    self.label.alpha = 1
                    
                    self.playAgain.alpha = 1
                    
                })
                
            }
            
            goNumber++
            
            sender.setImage(image, forState: .Normal)
            
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
    
    override func viewDidAppear(animated: Bool) {
        
        //label.center = CGPointMake(label.center.x - 400, label.center.y)
        
        label.alpha = 0
        
        playAgain.alpha = 0
        
    }
    
}
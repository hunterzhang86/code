//
//  ViewController.swift
//  Manage The Keyboard
//
//  Created by Hunter on 14/12/10.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITextFieldDelegate {

    @IBOutlet var textField: UITextField!
    @IBOutlet var label: UILabel!
    
    @IBAction func buttonPressed(sender: AnyObject) {
        
        label.text = textField.text
        
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
    
        textField.resignFirstResponder()
        return true
        
    }
    
    override func touchesBegan(touches: NSSet, withEvent event: UIEvent) {
        
        self.view.endEditing(true)
        
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


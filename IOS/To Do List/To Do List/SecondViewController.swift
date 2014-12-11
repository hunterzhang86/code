//
//  SecondViewController.swift
//  To Do List
//
//  Created by Hunter on 14/12/10.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class SecondViewController: UIViewController, UITextFieldDelegate {
    
    @IBOutlet var toDoItem: UITextField!
    
    @IBAction func addItem(sender: AnyObject) {
        
        if !toDoItem.text.hasPrefix(" ") && !toDoItem.text.isEmpty {
            toDoItems.append(toDoItem.text)
            
            let fixedtoDoItems = toDoItems
            
            NSUserDefaults.standardUserDefaults().setObject(fixedtoDoItems, forKey: "toDoItems")
            NSUserDefaults.standardUserDefaults().synchronize()
            
            self.view.endEditing(true)
        } else {
            println("输入不正确")
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

    func textFieldShouldReturn(textField: UITextField) -> Bool {
        
        textField.resignFirstResponder()
        
        /*
        if !toDoItem.text.hasPrefix(" ") && !toDoItem.text.isEmpty {
            toDoItems.append(toDoItem.text) //点击return的时候自动将输入的文字加入toDoItems
        }
        */
    
        return true
        
    }
    
    override func touchesBegan(touches: NSSet, withEvent event: UIEvent) {
        
        self.view.endEditing(true)
        
    }
}


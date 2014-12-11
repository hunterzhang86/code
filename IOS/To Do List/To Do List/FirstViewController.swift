//
//  FirstViewController.swift
//  To Do List
//
//  Created by Hunter on 14/12/10.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

var toDoItems:[String] = []

class FirstViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {

    @IBOutlet var taskTable:UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        
        return toDoItems.count
        
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        
        var cell = UITableViewCell(style: UITableViewCellStyle.Default, reuseIdentifier: "cell")
        
        cell.textLabel?.text = toDoItems[indexPath.row]
        
        return cell
        
    }
    
    override func viewWillAppear(animated: Bool) {
        
        if var storedtoDoItems : AnyObject = NSUserDefaults.standardUserDefaults().objectForKey("toDoItems") {
            
            toDoItems = []

            for var i = 0; i < storedtoDoItems.count; ++i {
                
                toDoItems.append(storedtoDoItems[i] as NSString)
            }
            
        }
        
        taskTable.reloadData()
    }
    
    func tableView(tableView: UITableView, commitEditingStyle editingStyle: UITableViewCellEditingStyle, forRowAtIndexPath indexPath: NSIndexPath) {
        
        //删除的时候有一些Bug
        
        if editingStyle == UITableViewCellEditingStyle.Delete {
            
            toDoItems.removeAtIndex(indexPath.row)
            
            let fixedtoDoItems = toDoItems
            NSUserDefaults.standardUserDefaults().setObject(fixedtoDoItems, forKey: "toDoItems")
            NSUserDefaults.standardUserDefaults().synchronize()
            
            taskTable.reloadData()
        }
        
    }

}


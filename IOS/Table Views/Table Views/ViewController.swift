//
//  ViewController.swift
//  Table Views
//
//  Created by Hunter on 14/12/10.
//  Copyright (c) 2014年 Appfish. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITableViewDelegate {
    
    let array = ["Hunter", "Zhang", "Qiu", "Shi"]

    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return array.count    //显示四行
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        
        let ceil = UITableViewCell(style: UITableViewCellStyle.Default, reuseIdentifier: "ceil")
        
        ceil.textLabel?.text = array[indexPath.row]
        
        return ceil
        
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


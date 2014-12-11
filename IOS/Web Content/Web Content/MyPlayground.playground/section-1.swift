// Playground - noun: a place where people can play

import UIKit

var str = "Hello, playground"

var anotherStr = "Hunter"

var thirdStr = str + anotherStr

for character in str {
    println(character)
}

var newStr = "Test String" as NSString

var subStr = (str as NSString).substringToIndex(5)

var endingStr = (str as NSString).substringFromIndex(6)

var hunterStr = newStr.substringWithRange(NSRange(location: 5, length: 6))

if newStr.containsString("String") {
    
    //do something
    
}

newStr.componentsSeparatedByString(" ")

newStr.uppercaseString

newStr.lowercaseString



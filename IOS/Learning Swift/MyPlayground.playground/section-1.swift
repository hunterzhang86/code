// Playground - noun: a place where people can play

import UIKit

var ages = [23, 34, 3, 0]

var myAge = ages[1]

var myWifeAge = ages[0]

var totalAge = myAge + myWifeAge

var myFamily = ["Dad": "Rob", "Mum": "Kirsten", "First Son": "Tom", "Second Son": "Ralphie"]
var mumName = myFamily["Mum"]

var myRole = "Dad"

var myName = myFamily[myRole]

ages.append(5)

myFamily["Daughter"] = "Mary"

println(myFamily)

ages.removeAtIndex(4)

println(ages)

myFamily["Daughter"] = nil

println(myFamily)

var numberOfPeopleInFamily = ages.count

var someIntergers = [Int]()

var someStrings = [String]()

var myDictionary = Dictionary<String, Float>()

myDictionary["pi"] = 3.14

println(myDictionary)

var favoriteColors = ["Rob":"Green", "Kirsten":"Orange", "Tom":"Pink", "Ralphie":"Blue"]

println("There are \(favoriteColors.count) peoples in my family and my favoriteColors is " + favoriteColors["Rob"]! )



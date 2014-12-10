// Playground - noun: a place where people can play

import UIKit

var number = 3

var newNumber = ++number

var otherNumber = number

for var i = 0; i < 5; i++ {
    
    println(i)
    
}

println()

for var i = 10; i > 3; i-- {
    println(i)
}

var numbers = [1, 5, 4, 6, 9, 11]

for (index, value) in enumerate(numbers) {
    
    println("Index: \(index), Value: \(value) ")
    
}

var newNumbers = ["a": 1, "b": 2, "c": 3, "d": 4]

for (index, value) in newNumbers {
    
    println("Index: \(index), Value: \(value) ")
    
}

println(newNumbers)

var i = 3

while i < 7 {
    i++
    println(i)
}

var array = [7, 4, 6 ,1]

var j = 0

while(j < array.count) {
    
    println(array[j])
    j++
    
}


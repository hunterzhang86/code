println("Hello, world")

var myVariable = 42
myVariable = 50
let myConstant = 42

println(myVariable)

let fl:Float = 70

let label = "The width is"
let width = 94
let widthlabel = label + String(width)

let apples = 3
let oranges = 5
let appleSummary = "I have \(apples) apples"
let orangeSummary = "I have \(oranges) oranges"

var shoppingList = ["catfish", "water", "tulips", "blue paint"]
shoppingList[1] = "bottle of water"

var occupations = [
    "Malcolm": "Captain",
    "Kaylee": "Mechanic",
]
occupations["Jayne"] = "Public Relations"

let ind = [12, 98, 76, 22]
var count = 0
for score in ind{
    if score > 50{
        count += 3
    } else{
        count += 1
    }
}

count

var optionalString: String? = "Hello"
optionalString == nil

var optionalName: String? = nil
var greeting = "Hello!"
if let name = optionalName {
    greeting = "Hello, \(name)"
} else{
    greeting = "Hunter"
}

let high = "zhanghunter"
switch high {
case "12":
    println("12")
case let x where x.hasSuffix("hunter"):
    print("yes")
default:
    println("no input")
}


let res = [
    "hunter" : [3,2,4,5,9,12],
    "zhang" : [645,343,2,1,86],
    "yes" : [34,-12,-98,33,22,11]
]

var mins = Int.max

for (kind, numbers) in res {
    for number in numbers {
        if number < mins {
            mins = number
        }
    }
}

mins

var num = 34
while num < 1000 {
    num *= 2
}
num

var m = 23
do{
    m *= 2
} while m < 1000
m

var FirstinLoop = 0
for i in 0...5 {
    FirstinLoop += i
}
FirstinLoop

var SecondForLoop = 0
for var i = 0; i < 5; i++ {
    SecondForLoop += 1
}
SecondForLoop

func greeting(name: String, age: Int) -> String {
    return "\(name)'s age is \(age)"
}
greeting("Hunter", 18)

func getJWD() -> (Double, Double, Double) {
    return (123.2, 23.1, 99.8)
}
getJWD()

func average(a : Double, b : Double, c : Double) -> Double {
    return (a + b + c)/3
}
average(1, 2, 3)




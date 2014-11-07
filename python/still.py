def func():
    global x
    print "x is ",x
    x=40
    print "x to ",x
    
x=4
func()
print "x is still ",x
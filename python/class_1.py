class Person:
    def __init__(self,name):
        self.name=name
    def sayHi(self):
        print self.name


p=Person('Hunter')
p.sayHi()
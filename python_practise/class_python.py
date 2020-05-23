class MyClass:
    variable = "blah"

    def function(self):
        print("This is a message inside the class.")
        print(self.variable)

# myobjectx = MyClass()
# myobjectx.function()

# print(myobjectx.variable)

myobjectx = MyClass()
myobjecty = MyClass()

myobjecty.variable = "yackity"

# Then print out both values
print(myobjectx.variable)
print(myobjecty.variable)

# define the Vehicle class
class Vehicle:
    name = ""
    kind = "car"
    color = ""
    value = 100.00
    def description(self):
        desc_str = "%s is a %s %s worth $%.2f." % (self.name, self.color, self.kind, self.value)
        return desc_str
# your code goes here

car1 = Vehicle()
car1.name = "Fer"
car1.color ="red"
car1.kind ="covertible"
car1.value=60000.00

car2 = Vehicle()
car2.name = "Jump"
car2.color ="blue"
car2.kind ="Blue Van"
car2.value=850000.00


# test code
print(car1.description())
print(car2.description())
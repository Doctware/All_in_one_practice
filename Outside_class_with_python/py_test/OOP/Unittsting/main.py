#!/usr/bin/python3
MyCalculator = __import__('Methods').MyCalculator
Car = __import__('encapsulation').Car
Robbot = __import__('Generic_S_G').Car

print("cal secotion")
mycal = MyCalculator(10, 30)
print(mycal.add())

print("")

print("car info section")
car_info = Car("Toyota", "Camry", 2024)
print(car_info.display_info())

print("----")

print(car_info.year)

print("-----")

print(car_info.get_make())

print("getter and setter section")

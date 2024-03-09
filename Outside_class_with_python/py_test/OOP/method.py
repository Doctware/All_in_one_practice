#!/usr/bin/python3
def hi(obj):
    print("I am " + obj.name + "!")
class Robot:
    say_hi = hi

x =  Robot()
x.name = "Doctware"
Robot.say_hi(x)

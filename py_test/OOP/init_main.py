#!/usr/bin/python3
Robot = __import__('2-init').Robot

x = Robot()
x.say_hi()
x = Robot(" Doctware")
x.say_hi()
x = Robot()
x.set_name(" Clever")
x.say_hi()
y = Robot()
y.set_name(x.get_name())
print(y.get_name())

#!/usr/bin/python3
class Robot:
    def __init__(self, name=None):
        print("__init__ have been executed")
        self.name = name

    def say_hi(self):
        if self.name:
            print("my name is" + self.name)
        else:
            print("i hvae no name")

    def set_name(self, name):
        self.name = name

    def get_name(self):
        return self.name

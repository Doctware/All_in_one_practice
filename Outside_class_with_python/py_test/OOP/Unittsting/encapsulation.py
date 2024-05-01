#!/usr/bin/python3

class Car:

    def __init__(self, make, model, year):
        self.__make = make
        self._model = model
        self.year = year

    def get_make(self):
        return self.__make

    def set_model(self, new_model):
        self._model = new_model

    def display_info(self):
        print(f"Make: {self.get_make()}")
        print(f"Model: {self._model}")
        print(f"Year: {self.year}")

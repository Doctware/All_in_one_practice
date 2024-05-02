#!/usr/bin/python3

class Robot:
    def __init__(self, name, build_year, city):
        self.name = name
        self.build_year = build_year
        self.city = city

    @property
    def name(self):
        return self.__name

    @property
    def build_year(self):
        return self.__build_year

    @property
    def city(self):
        return self.__city

    @name.setter
    def name(self, value):
        self.__name = value

    @name_setter
    def build_year(self, value):
        self.__build_year = value

    @city.setter
    def city(self, value):
        self.__city = value

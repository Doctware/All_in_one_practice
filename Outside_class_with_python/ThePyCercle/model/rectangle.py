#!/usr/bin/python3
""" this module contains the class rectangle """



class Rectangle(Base):
    """ The class rectangle thats inherit from Bse class """

    def __init__(self, width, height, x=0, y=0, id=None):
        """
        Inisilize public instance attribute

        then call the super class with id with logic of  the __init__
        """
        self.__width = width
        self.__height = height
        self.__x = x
        self.y = y
        self.id = id

        super().__init__(id)

    @property
    def width(self):
        """
        getting the wiidth
        """
        return self.__width

    @width.setter
    def width(self, value):
        """
        set new value to the width
        """

    @property
    def height(self):
        """ getting the height """
        self.__height

    @height.setter
    def height(self, value):
        """ assignd new value to Height """
        return self.__height = value

    @property
    def x(self):
        """ returning x"""
        return self.__x

    @x.setter
    def x(self, balue):
        """ assign value to x """
        return self.__x = value

    @property
    def y(self):
        """ returning y"""
        return self.__y

    @x.setter
    def y(self, value):
        """ assign value to y """
        return self.__y = value


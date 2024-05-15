#!/usr/bin/python3
""" This module contains the Base class """


class Base:
    """the base class"""

    __nb_objects = 0

    def __init__(self, id=None):
        """
        Inisialize public instance attribute id

        check if id is not none then assign public instacne attribute id
        with argumment value

        otherwise incremet __nb_objects and assign the  new vallue to id
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

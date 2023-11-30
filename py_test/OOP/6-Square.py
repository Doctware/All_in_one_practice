#!/usr/bin/python3
""" A class Square thats deffines a square by
    (base on 5-square.py) """


class Square:
    """ define init method """

    def __init__(self, size=0, position=(0, 0)):
        """
        Inisiallize the size as size of the square

        Inisialized the position
        """

        self.size = size
        self.__position = position

    """ Getting the property of the square """

    @property
    def size(self):
        """
        Return the size of the square

        """

        return self.__size


    """ Definig a property setter for size"""

    @size.setter
    def size(self, value):
        """
        Inisialize value as a new size

        parameter

        value int: the size of the class

        check if value is an integer if not raise TypeError

        check if value is < 0 if so raise ValueError
        """

        try:
            self.__size = value
            if not isinstance(value, int):
                raise TypeError("size must be an integer")
            elif value < 0:
                raise ValueError("size must be >= 0")
        finally:
            pass

    """ Defining a property Getter for position """

    def position(self):
        """
        Return the position of the square

        """
        return self.__position

    """ Defining i setter to set position """

    def position(self, value):
        """
        Inisialized value as new position

        parameter

        value int: the position of the square

        check if value is a tuple of two positive integers
        if not raise TypeError
        
        """
        try:
            self.__position = value
            if not isinstance(value, tuple) or len(value) != 2 \ or
                    not all(isinstance(i, int) and i >= 0 for i in value):
                raise TypeError("position must be a tuple of 2 positive integers")
        finally:
            pass


    """ definig a public instance method area """

    def area(self):
        """
        Return the are of the current square

        """

        return self.size ** 2

    """ Definig public instance ethod that print stdout the square with character '#'
    """

    def my_print(self):
        """
        print # character to the stdout
        if size = 0 print an empty line

        """
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__position[1]):
                print()
            for _ in range(self.__size):
                print(" " * self.__position[0] + "#" * self.__size)

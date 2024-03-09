#!/usr/bin/python3
""" A class square that defines square by
    (base in 4-square.py) """


class Square:
    """ define init method """

    def __init__(self, size=0):
        """
        Insiallize size as the class size

        parameter

        size int: the size of te class
        """
        self.size = size

    """ getting the prperty """

    @property
    def size(self):
        """
        Getter: getting the private instane of the class
        
        Retriving it

        returning the private instance of the class
        """

        return self.__size

    """ Setting up the setter """

    @size.setter
    def size(self, value):
        """ A setter method

        Inisialized private instance

        parameter:

        value int: the new size value

        check if value is type int else raise Type Error
        check if value is >= 0 else raise ValueError

        """

        try:
            self.__size = value
            if not isinstance(value, int):
                raise TypeError("size must be an integer")
            elif value < 0:
                raise ValueError("size must be >= 0")
        finally:
            pass

    """ Deffining public methis that returns the current square area """

    def area(self):
        """
        Return the area of the sqaure

        """
        return self.size ** 2


    """  
    A public instance method thats prints
    in stdout the square with character #

    check if size = 0 if so then print empty line
    """
    def my_print(self):

        if self.__size == 0:
            print()
        else:
            for _ in range(self.__size):
                print('#' * self.__size)

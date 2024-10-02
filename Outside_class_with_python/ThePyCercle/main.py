#!/usr/bin/python3
from model.base import Base
from model.rectangle import Rectangle

if __name__ == "__main__":

    print("Base model section")
    print()

    b1 = Base()
    print(b1.id)

    b2 = Base()
    print(b2.id)

    b3 = Base(99456)
    print(b3.id)

    b4 = Base()
    print(b4.id)

    print("---------")
    print()

    print("Rectangle section")
    print()

    r1 = Rectangle(10, 2)
    print(r1.id)

    r2 = Rectangle(2, 10)
    print(r2.id)

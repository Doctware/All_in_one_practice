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

    print("---------")
    print()

    print("Rectangle section")
    print()

    r1 = Rectangle()
    print(r1.id)

    r2 = Rectangle()
    print(r2.id)

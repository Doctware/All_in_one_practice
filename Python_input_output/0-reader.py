#!/usr/bin/python3
""" this function read text from file """


def read_file(filename=""):
    """
    reading text from file
    """
    with open(filename, 'r', encoding='utf-8') as f:
        for line in f:
            f.readlines()
            print(line, end=" ")

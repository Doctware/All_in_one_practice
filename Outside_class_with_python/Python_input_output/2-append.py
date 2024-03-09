#!/usr/bin/python3
def append(filename="", text=""):
    with open(filename, 'a', encoding='utf-8') as f:
        f.write(text)
        return len(text)

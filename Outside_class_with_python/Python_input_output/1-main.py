#!/usr/bin/python3
write_to_file = __import__('1-write_to_file').write_to_file

nb_character = write_to_file('my_first_file.txt', "This school is so cool!\n")
print(nb_character)

#!/usr/bin/env python3
import cmd

class HelloWorld(cmd.Cmd):
    """ simple command processor example """

    def do_greet(self, person):
        """ greet [person]
        gree the name of person """
        if person:
            print("hello", person)
        else:
            print("hello")

    def help_greet(self):
        print('\n'.join(['greet [person,]',
                            'greet the name of person']))

    def do_EOF(self, line):
        return True

    def do_postloop(self):
        print()

if __name__ == "__main__":
    HelloWorld().cmdloop()

#!/usr/bin/env python3

import cmd
import shlex

class HelloWorld(cmd.Cmd):
    """ simple command processor example """
    intro = "Doctware App"
    prompt = "please enter a command: "

    freinds = ['Alice', 'Doctware', 'Yusuf', 'Bob']

    def do_great(self, person):
        if person and person in self.freinds:
            greeting = "hello {:s}".format(person)
        elif person:
            greeting = "hello, " + person
        else:
            greeting = 'hello'
        print(shlex.split(greeting))

    def complete_great(self, text, line, beidx, endidx):
        if not text:
            completion = self.freinds[:]
        else:
            completion = [f for f in self.freinds if f.startswith(text) ]
        return completion

    def help_great(self):
        print('\n'.join(['greet [name_of_person]','Greet the named person']))

    def do_sum(self, nums):
        total = sum(map(int, shlex.split(nums)))
        print("{:d}".format(total))

    def do_EOF(self, line):
        return True

if __name__ == "__main__":
    HelloWorld().cmdloop()

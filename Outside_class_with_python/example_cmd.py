#!/usr/bin/env python3

import cmd

class HelloWorld(cmd.Cmd):
    """ simple command processor example """

    freinds = ['Alice', 'Doctware', 'Yusuf', 'Bob']

    def do_great(self, person):
        if person and person in self.freinds:
            greeting = "hello {:s}".formart(person)
        elif person:
            greeting = "hello, " + person
        else:
            greeting = 'hello'
        print(greeting)

    def complete_great(self, text, line, beidx, endidx):
        if not text:
            completion = self.freinds[:]
        else:
            completion = freinds[f 
                                 for f in self.freinds
                                 if f.startswith(text)
                                 ]
        return completion

    def help_great(self):
        print('\n'.join(['greet [name_of_person]','Greet the named person']))

    def do_EOF(self, line):
        return True

if __name__ == "__main__":
    HelloWorld().cmdloop()

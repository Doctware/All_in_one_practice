import cmd

class Illustrate(cmd.Cmd):
    "Illustrate the base class method use."
    
    def cmdloop(self, intro=None):
        print('cmdloop(%s)' % intro)
        return super().cmdloop(intro)
    
    def preloop(self):
        print('preloop()')
    
    def postloop(self):
        print('postloop()')
        
    def parseline(self, line):
        print('parseline(%s) =>' % line, end=' ')
        ret = super().parseline(line)
        print(ret)
        return ret
    
    def onecmd(self, s):
        print('onecmd(%s)' % s)
        return super().onecmd(s)

    def emptyline(self):
        print('emptyline()')
        return super().emptyline()
    
    def default(self, line):
        print('default(%s)' % line)
        return super().default(line)
    
    def precmd(self, line):
        print('precmd(%s)' % line)
        return super().precmd(line)
    
    def postcmd(self, stop, line):
        print('postcmd(%s, %s)' % (stop, line))
        return super().postcmd(stop, line)
    
    def do_greet(self, line):
        print('hello,', line)

    def do_EOF(self, line):
        "Exit"
        return True

if __name__ == '__main__':
    Illustrate().cmdloop('Illustrating the methods of cmd.Cmd')


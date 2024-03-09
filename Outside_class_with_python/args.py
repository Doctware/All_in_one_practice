#!/usr/bin/python3
def test_var_args(f_arg, *argv):
    print("first normal args", f_arg)
    for arg in argv:
        print("another arg trough *argv :", arg)

test_var_args('hello', 'Doctware', 'coding is', 'cool')

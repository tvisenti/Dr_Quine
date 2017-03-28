#!/usr/bin/env Python
# First Comment
def foo():
    return (0)

def main():
    # Second Comment
    foo()
    str = "#!/usr/bin/env Python%c# First Comment%cdef foo():%c%creturn (0)%c%cdef main():%c%c# Second Comment%c%cfoo()%c%cstr = %c%s%c%c%cprint (str %c (10,10,10,9,10,10,10,9,10,9,10,9,34,str,34,10,9,37,10,10))%c%cmain()"
    print (str % (10,10,10,9,10,10,10,9,10,9,10,9,34,str,34,10,9,37,10,10))

main()

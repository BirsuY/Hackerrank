#birsuyilmaz
import textwrap

def wrap(string, max_width):
    i = 0
    while i < (len(string) - max_width):
        if i + max_width >= len(string):
            return string[i:] 
        print(string[i: max_width + i])
        i += max_width
        
    if len(string) % max_width != 0: 
        return string[i:]
    
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
#birsuyilmaz
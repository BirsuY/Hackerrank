#birsuyilmaz
#!/bin/python3

import math
import os
import random
import re
import sys

def solve(s):
    s_ls = s.split(" ")
    s_new = ""
    
    for word in s_ls:
        for letter in word:
                letter = letter.upper()
                i = s_ls.index(word)
                s_ls[i] = letter + word[1:]
                s_new = ""
                break

    print(s_ls)
    text = " ".join(s_ls)
    return text    
                
         
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
#birsuyilmaz
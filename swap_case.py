#birsuyilmaz
def swap_case(s):
    s_lst = list(s)
    s_str = ""
    for l in s_lst:
        if l.isupper():
            l = l.lower()
            s_str += l
        elif l.islower():
            l = l.upper()
            s_str += l
        else:
            s_str += l
    return s_str

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
#birsuyilmaz
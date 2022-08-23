#birsuyilmaz
def count_substring(string, sub_string):    
    i = 0
    sum_ = 0
    a = len(string)
    b = len(sub_string)
    while i < a :
        if string[i: b + i] == sub_string:
            sum_ += 1
        i += 1
    return sum_
        

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
#birsuyilmaz
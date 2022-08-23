#birsuyilmaz
if __name__ == '__main__':
    s = input()
    
    sum_ = 0    
    for letter in s:
        if letter.isalnum():
            print(True)
            break
        else:
            sum_ += 1
    if sum_ == len(s):
        print(False)
        
    sum_ = 0   
    for letter in s:
        if letter.isalpha():
            print(True)
            break
        else:
            sum_ += 1
    if sum_ == len(s):
        print(False)
    
    sum_ = 0   
    for letter in s:
        if letter.isdigit():
            print(True)
            break
        else:
            sum_ += 1
    if sum_ == len(s):
        print(False)
        
    sum_ = 0
    for letter in s:
        if letter.islower():
            print(True)
            break
        else:
            sum_ += 1
    if sum_ == len(s):
        print(False)
        
    sum_ = 0   
    for letter in s:
        if letter.isupper():
            print(True)
            break
        else:
            sum_ += 1
    if sum_ == len(s):
        print(False)
#birsuyilmaz
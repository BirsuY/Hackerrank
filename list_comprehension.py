#birsuyilmaz
def list_maker(x):
    x_lst = []
    while (x >= 0):
        x_lst.append(x)
        x -= 1
        x_lst.reverse()
    return x_lst
        


if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
x_lst = list_maker(x)
y_lst = list_maker(y)
z_lst = list_maker(z)

whole_lst = []
for a in x_lst:
    for b in y_lst:
        for c in z_lst:
            if (a + b + c != n):
                whole_lst.append([a,b,c])
whole_lst.sort()
print(whole_lst)
#birsuyilmaz
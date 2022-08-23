#birsuyilmaz
if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
arr = list(arr)  
arr.sort()
for i in arr:
    num = arr.count(i)
    if num > 1:
        while num > 1:
            arr.remove(i)
            num -= 1
print(arr[-2])
#birsuyilmaz
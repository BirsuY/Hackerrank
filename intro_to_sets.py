#birsuyilmaz
def average(array):
    array = set(array)
    sum_ = 0
    for a in array:
        sum_ += a
    length = len(array)
    aver = sum_ / length
    aver_ = round(aver, 3)
    return aver_

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
#birsuyilmaz
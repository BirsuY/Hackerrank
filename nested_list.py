#birsuyilmaz
if __name__ == '__main__':
    n = range(int(input()))
    name_grad = [] 
    grad = []
    for _ in n:
        name = input()
        score = float(input())
        name_grad.append([name, score])
name_grad.sort()
for x in name_grad:
    grad.append(x[1])

grad.sort()

min = grad[0]
for a in grad:
    if a > grad[0]:
        low_sec = a
        break


for y in name_grad:
    if y[1] == low_sec:
        print(y[0])
#birsuyilmaz
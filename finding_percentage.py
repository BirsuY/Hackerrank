#birsuyilmaz
if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    total = 0
    for l in student_marks[query_name]:
        total += l
    avg = total / 3
    avg_formt = "{:.2f}".format(avg)
    print(avg_formt)
#birsuyilmaz
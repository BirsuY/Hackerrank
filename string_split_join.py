#birsuyilmaz
def split_and_join(line):
    line_str = line.split(" ")
    line_lst = "-".join(line_str)
    return line_lst

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
#birsuyilmaz
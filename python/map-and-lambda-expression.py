cube = lambda x: x**3# complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    f1 = 0
    f2 = 1
    out = []
    if n < 1:
        return out
    out.append(f1)
    for i in range(1, n, 1):
        out.append(f2)
        next_num = f1 + f2
        f1 = f2
        f2 = next_num
    return out

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
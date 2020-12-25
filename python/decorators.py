def wrapper(f):
    def fun(l):
        # complete the function
        l = sorted(l, key=lambda num: num[-10:])
        for i in range(len(l)):
            num = l[i]
            num = "+91 " + "".join(num[-10:-5]) + " " + "".join(num[-5:])
            print(num, sep="\n")
    return fun

@wrapper
def sort_phone(l):
    print(*sorted(l), sep='\n')

if __name__ == '__main__':
    l = [input() for _ in range(int(input()))]
    sort_phone(l) 



# Enter your code here. Read input from STDIN. Print output to STDOUT
def get_priority_level(s):
    if s.islower():
        return (1, s)
    elif s.isupper():
        return (2, s)
    elif s.isnumeric():
        if int(s) % 2 != 0:
            return (3, s)
        else:
            return (4, s)
if __name__ == "__main__":
    s = input()
    print(*sorted(s, key=get_priority_level), sep="")
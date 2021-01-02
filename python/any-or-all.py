# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    N = int(input())
    inp = input().split(" ")
    print (all([int(i) > 0 for i in inp]) and any([j == j[::-1] for j in inp]))
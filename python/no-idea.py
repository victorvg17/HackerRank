# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    n, m = map(int, input().split(" "))
    arr = list(input().split(" "))
    A = set(input().split(" "))
    B = set(input().split(" "))
    happ = sum([(i in A) - (i in B) for i in arr])
    print(happ)

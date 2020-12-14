# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    N = int(input().strip())
    arr_n = set(map(int, input().strip().split(" ")))
    M = int(input().strip())
    arr_m = set(map(int, input().strip().split(" ")))
    ans = arr_n.difference(arr_m)
    ans = sorted(ans.union(arr_m.difference(arr_n)))
    for a in ans:
        print(a)
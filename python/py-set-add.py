# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    N = int(input())
    stamps = set()
    for i in range(N):
        st = input()
        stamps.add(st)
    print(len(stamps))
# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    N, M = map(int, input().split()) #N=9, M=27
    pat = ".|."
    for i in range(1, N-1, 2):
        print((i*pat).center(M, "-"))
    print("WELCOME".center(M, "-"))
    for i in range(N-2, 0, -2):
        print((i*pat).center(M, "-"))
    
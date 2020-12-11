import numpy as np

if __name__ == "__main__":
    N, M = list(map(int, input().split(" ")))
    A = np.zeros((N, M), dtype=int)
    B = np.zeros((N, M), dtype=int)
    
    for i in range(N):
        A[i, :] = np.array(input().split(" "), dtype=int)
    for i in range(N):
        B[i, :] = np.array(input().split(" "), dtype=int) 
    
    
    print(A+B)
    print(A-B)
    print(A*B)
    print(A//B)
    print(A%B)
    print(A**B)

    
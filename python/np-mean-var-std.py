import numpy as np
np.set_printoptions(legacy='1.13')

if __name__ == "__main__":
    N, M = list(map(int, input().split(" ")))
    A = np.zeros((N, M), dtype=int)
    
    for i in range(N):
        A[i, :] = np.array(input().split(" "), dtype=int)
    print(np.mean(A, axis=1))
    print(np.var(A, axis=0))
    print(np.std(A))
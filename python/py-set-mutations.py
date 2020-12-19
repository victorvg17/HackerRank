# Enter your code here. Read input from STDIN. Print output to STDOUT
if __name__ == "__main__":
    len_a = int(input())
    a = set(map(int, input().split(" ")))
    N = int(input())
    for i in range(N):
        operands = input().strip().split(" ")
        operation, num_elem = operands[0], int(operands[1])
        b = set(map(int, input().split(" ")))
        
        if operation == "intersection_update":
            a.intersection_update(b)
        elif operation == "update":
            a.update(b)
        elif operation == "symmetric_difference_update":
            a.symmetric_difference_update(b)
        elif operation == "difference_update":
            a.difference_update(b)
    print(sum(a))
        
    
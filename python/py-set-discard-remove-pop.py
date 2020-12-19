if __name__ == "__main__":
    n = int(input())
    data_set = set(map(int, input().split(" ")))
    N = int(input())
    for i in range(N):
        operands = input().strip().split(" ")
        operation = operands[0]
        if len(operands) > 1:
            num = int(operands[1])
            
        if operation == "pop":
            data_set.pop()
        elif operation == "remove":
            data_set.remove(num)
        elif operation == "discard":
            data_set.discard(num)
    print(sum(data_set))
        
        
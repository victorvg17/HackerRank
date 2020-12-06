from typing import Tuple, List
def process_input(args: Tuple[str, ...], arr: List[int])->None:
    cmd = args[0]
    if cmd == "insert":
        arr.insert(int(args[1]), int(args[2]))
    elif cmd == "print":
        print(arr)
    elif cmd == "remove":
        if int(args[1]) in arr:
            arr.remove(int(args[1]))
    elif cmd == "reverse":
        arr.reverse()
    elif cmd == "sort":
        arr.sort()
    elif cmd == "append":
        arr.append(int(args[1]))
    elif cmd == "pop":
        arr.pop()
        
    
    
    

if __name__ == '__main__':
    N = int(input())
    arr = []
    for i in range(N):
        usr_input = input().strip().split(" ")
        process_input(args=usr_input, arr=arr)     
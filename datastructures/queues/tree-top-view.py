from queue import Queue
def topView(root):
    #Write your code here
    uniq_lvls = [] # list of elements same as q: (Node, hd)
    q = Queue()
    q.put((root, 0)) # q elements: (Node, hd)
    while q.empty() is False:
        temp = q.get()
        if temp[1] not in (l[1] for l in uniq_lvls):
            uniq_lvls.append(temp)
        if temp[0].left:
            q.put((temp[0].left, temp[1]-1))
        if temp[0].right:
            q.put((temp[0].right, temp[1]+1))
    for l in sorted(uniq_lvls, key=lambda e: e[1]):
        print(l[0].info, end=' ')

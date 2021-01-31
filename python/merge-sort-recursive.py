def merge_sort_recursion(A:List[int])->None:
    size = len(A)
    if size > 1:
        mid = len(A)//2
        l_h = A[:mid]
        l_s = len(l_h)
        r_h = A[mid:]
        r_s = len(r_h)
        merge_sort_recursion(l_h)
        merge_sort_recursion(r_h)
        
        i, j, k = 0, 0, 0
        while i<l_s and j<r_s:
            if l_h[i]<r_h[j]:
                A[k]=l_h[i]
                i += 1
            else:
                A[k]=r_h[j]
                j += 1
            k += 1
            
        if i<l_s:
            A[k]=l_h[i]
            i += 1
            k += 1
        if j<r_s:
            A[k]=r_h[j]
            j += 1
            k += 1

class QuickSorter:
    def swap(self, A, i, j):
        temp = A[i]
        A[i] = A[j]
        A[j] = temp
        return A
    
    def partition_using_pivot(self, A, l, h):
        i=l
        j=h
        pivot = A[i]
        while i<j:
            while(pivot >= A[i]):
                i += 1
            while(A[j]>pivot):
                j -= 1
            if i<j:
                A = self.swap(A, i, j)
        A = self.swap(A, l, j)
        return j
    
    def quick_sort(self, A, l, h):
        if l<h:
            j = self.partition_using_pivot(A, l, h)
            self.quick_sort(A, l, j)
            self.quick_sort(A, j+1, h)
# test-case
if __name__ == "__main__":
    quick_sorter = QuickSorter()
    A = [10, 16, 8, 12, 15, 6, 3, 9, 5]
    len(A)
    quick_sorter.quick_sort(A, l=0, h=8)

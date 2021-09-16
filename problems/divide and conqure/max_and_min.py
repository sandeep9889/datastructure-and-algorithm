# Divide and conquer solution to find the minimum and maximum number in a list
def findMinAndMax(A, left, right, min, max):
 
    # if the list contains only one element
 
    if left == right:               # common comparison
 
        if min > A[right]:          # comparison 1
            min = A[right]
 
        if max < A[left]:           # comparison 2
            max = A[left]
 
        return min, max
 
    # if the list contains only two elements
 
    if right - left == 1:           # common comparison
 
        if A[left] < A[right]:      # comparison 1
            if min > A[left]:       # comparison 2
                min = A[left]
 
            if max < A[right]:      # comparison 3
                max = A[right]
 
        else:
            if min > A[right]:      # comparison 2
                min = A[right]
 
            if max < A[left]:       # comparison 3
                max = A[left]
 
        return min, max
 
    # find the middle element
    mid = (left + right) // 2
 
    # recur for the left sublist
    min, max = findMinAndMax(A, left, mid, min, max)
    #print(min,max,"left")
    # recur for the right sublist
    min, max = findMinAndMax(A, mid + 1, right, min, max)
    #print(min,max,"right")
    return min, max
 
 
if __name__ == '__main__':
 
    A = [7, 2, 8, 3, 1, 6, 7, 9, 4]
 
    # initialize the minimum element by `INFINITY` and the
    # maximum element by `-INFINITY`
    (min, max) = (A[0],A[0])
    (min, max) = findMinAndMax(A, 0, len(A) - 1, min, max)
 
    print("The minimum element in the list is", min)
    print("The maximum element in the list is", max)
 

 
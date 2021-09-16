def mergesort(arr):
    if len(arr)>1:
        mid=len(arr)/2
        L=arr[:mid]
        R=arr[mid:]
        mergesort(L)
        mergesort(R)
        i=j=k=0
        while i<len(L) and j<len(R ):
            if L[i]<R[j]:
                arr[k]=L[i]
                i+=1
            else:
                arr[k]=R[j]
                j+=1
            k+=1
        print(arr)    
          
arr=[56,63,96,46,52,63,64,94]

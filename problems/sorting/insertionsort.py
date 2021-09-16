def insertionsort(arr):
    for i in range(1,len(arr)):
        store=arr[i]
        j=i-1
        while j>=0 and store<arr[j]:
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=store
    return arr
arr=[12,6,5,14,3]
sortedarr=insertionsort(arr)
print(sortedarr)            
def Bubblesort(arr):
    for i in range(len(arr)-1):
        for j in range (len(arr)-i-1):
            if arr[j]>arr[j+1] :
                arr[j],arr[j+1]=arr[j+1],arr[j]

    return arr  
arr=[50,10,456,22]
sortedarr=Bubblesort(arr)
print(sortedarr)              
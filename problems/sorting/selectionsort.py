from typing import Mapping


def selectionsort(arr):
    for i in range(len(arr)):
        minind=i
        for j in range(i+1,len(arr)):
            if arr[minind]>arr[j]:
                minind=j
        arr[i],arr[minind]=arr[minind],arr[i]
    return arr 

arr= [8,12,5,9,2]
sortedarr=selectionsort(arr)
print(arr)               
def find_max(a,n):
    n = len(a)
    i = 0
    for i in range(n-1):
        maxnumber = a[i]
        for j in range(i+1,n):
            if maxnumber<a[j]:
                maxnumber = a[j]
        return maxnumber
        
a = [3,4,2]
n = len(a)
print(a)
print(find_max(a,n))
def findminandmax(a,left,right,min,max):

    if left==right:
        if min>a[right]:
            min=a[right]
        if max<a[left]:
            max=a[left]
        return min,max

    if right-left==1:
        if a[left]<a[right]:
            if min>a[left]:
                min=a[left]

            if max<a[right]:
                max=a[right]
        else:
            if min>a[right]:
                min=a[right]
            if max<a[left]:
                max=a[left]
        return min,max

    mid=left+right//2

    min,max=findminandmax(a,left,mid,min,max)
    min,max=findminandmax(a,mid+1,right,min,max)
    return min,max

if __name__ == '__main__':
    a=[7,2,8,3,1,6,7,9,4]
    (min,max)=(a[0],a[0])
    (min,max)=findminandmax(a,0,len(a)-1,min,max)  
    print(min)
    print(max)







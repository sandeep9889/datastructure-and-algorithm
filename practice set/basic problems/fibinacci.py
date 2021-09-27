# fibonacci series = 0,1,1,2,3,5

print("enter no of element you want")

n = int(input())
a=0
b=1
int i

if (n==1):
    a=0
    b=1
    print("a")
else ( n==2 ):
    a=0
    b=1
    print("a","b")
    else:
     {
            print("a","b")
            while(i<=n):
                c=a+b
                a=b
                b=c
                i=i+1
                print(c)

        }



l=[]
str1="231*+9-"
for i in str1:
    try:
        int(i)
        l.append(str(i))
        
        
    except:
        a=l.pop()
        b=l.pop()
        val=l.append(eval(a+i+b))
    
print(l)
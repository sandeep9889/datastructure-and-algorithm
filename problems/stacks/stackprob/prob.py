def isbalanced(str):
    s=[]
    is_balanced=True
    i=0
    while i<len(str) and is_balanced:
        paren = str[i]
        if paren == "(":
            s.append(paren)
        elif paren == ")":
            s.pop(paren)

        i+=1
    print(s)    
    if s:
        is_balanced =False
        
    return is_balanced
str=("(""("")")


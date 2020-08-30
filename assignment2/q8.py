l=int(input("ENTER THE LIMIT :"))
d={}
ls=[]
c,f=0,0
for i in range(2, l+1):
    c=0
    for j in range(2, i//2+1):
        if(i % j == 0):
            c += 1
    if c == 0:
        d[i] = "PRIME"
    else:
        d[i] = "NON PRIME"
        ls.append(i)  
for i in ls:
    del d[i] 
    f += 1
print(d)
print("NUMBER OF ELEMENTS DELETED IS :",f)



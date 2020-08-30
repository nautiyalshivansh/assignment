n=int(input("ENTER THE LIMIT OF LIST :"))
list1=[]
res=1
print("ENTER THE NUMBERS :")
for i in range(0,n):
    a=int(input())
    res*=a
    list1.append(a)
print("THE RESULT IS : ",res)

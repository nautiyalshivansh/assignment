str=input("Input the string  ")
cl ,cu = 0 , 0
for i in range(0,len(str)):
    if (str[i].islower()):
        cl+=1
    elif (str[i].isupper()):
        cu+=1
print('Total lower case character  :-  ',cl)
print('Total upper case character  :-'  ,cu)
        

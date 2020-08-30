list1=[]
list2=[]
n=int(input("enter total number of list to insert "))
for i in range(n):
    print('enter the ',int(i+1),'  element to enter')
    ele=input(' ')
    list1.append(ele)
for i in list1:
    if i not in list2:
        list2.append(i)
print("list 1 is ",list1)
print("unique element list is ",list2)


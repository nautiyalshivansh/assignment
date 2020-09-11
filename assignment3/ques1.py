def check(str):
    a = "abcdefghijklmnopqrstuvwxyz"
    for ch in a:
        if ch not in str.lower():
            return False
    return True
str=input("ENTER THE STRING TO CHECK : ")
if(check (str) == True):
    print("ALL CHARACTER PRESENT")
else:
    print("ALL CHARACTER PRESENT")
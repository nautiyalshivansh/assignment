def almost_there(n):
    if abs(100 - n) <= 10 or abs(200 - n) <= 10:
        return True
    else:
        return False
no = int(input("ENTER THE NUMBER : "))
print(almost_there(no))
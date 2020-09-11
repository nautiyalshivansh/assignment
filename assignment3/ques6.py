def blackjack(a,b,c):
    sum = a+b+c
    if sum < 21 :
        return sum
    elif (sum > 21 and (11 in a or b or c)) :
        return (sum-10)
    else:
        return 'BUST'
n1 = int(input("ENTER FIRST NUMBER : "))
n2 = int(input("ENTER SECOND NUMBER : "))
n3 = int(input("ENTER THIRD NUMBER : "))
print(blackjack(n1,n2,n3))
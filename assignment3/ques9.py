def count_primes(n):
    count,t = 0,0
    for i in range(2,n+1):
        count = 0
        for j in range(2,i//2):
            if i%j == 0:
                count+=1
        if(count == 0):
            t+=1
    return t
no = int(input("ENTER THE NUMBER : "))
print(count_primes(no))
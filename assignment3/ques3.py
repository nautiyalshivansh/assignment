def reversed_words(str):
    word = str.split(' ')
    l = len(word)
    for i in range (0,l//2):
        t = word[i]
        word[i] = word[l-i-1]
        word[l-i-1] = t
    st = ' '.join(word)
    return st
str = input("ENTER THE STRING TO REVERSE : ")
st = reversed_words(str)
print(st)
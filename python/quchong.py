def huiwen(str):
    i=0
    j=len(str)-1
    while i<j:
        if str[i]==str[j]:
            i=i+1
            j=j-1
        else:
            return False
    return True

str='1211121'
print huiwen(str)
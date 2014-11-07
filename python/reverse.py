def Reverse(buffer,start,end):
    while start<end:
        buffer[start],buffer[end]=buffer[end],buffer[start]
        start=start+1
        end=end-1
    return buffer

def Shift(buffer,n,k):
    k=k%n
    Reverse(buffer,0,n-k-1)
    Reverse(buffer,n-k,n-1)
    Reverse(buffer,0,n-1)
    return buffer

buffer=[5,4,3,2,1]
print Reverse(buffer,0,len(buffer)-1)

print Shift(buffer,len(buffer),1)

        
    
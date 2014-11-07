def MaxProduct(a,len):
    maxProduct=1
    minProduct=1
    result=1    
    for i in range(len):
        if a[i]==0:
            maxProduct=1
            minProduct=1
        elif a[i]>0:
            maxProduct*=a[i]
            minProduct=min(minProduct*a[i],1)
        else:
            tmp=maxProduct
            maxProduct=max(minProduct*a[i],1)
            minProduct=tmp*a[i]
        result=max(result,maxProduct)
    return result

a=[-1,2,3,4]
print MaxProduct(a,len(a))

    
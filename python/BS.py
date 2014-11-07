def BiSeqSearch(list,n,v):
    low=0
    high=n-1
    while low<=high:
        mid=(low+high)/2
        if list[mid]==v:
            return mid
        if list[mid]>v:
            high=mid-1
        else:
            low=mid+1
    return -1

list=[1,4,5,6,7,9,4,3,1,2,4]
print 'Before sort: '
print list
list.sort()
print 'After sort: '
print list
index=BiSeqSearch(list,len(list),6)
print index
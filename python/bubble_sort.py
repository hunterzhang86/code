def bubble_sort(list):
    list_len=len(list)
    if list_len<2:
        return list
    for i in range(0,list_len):
        for j in range(0,list_len-i-1):
            if list[j]>list[j+1]:
                list[j],list[j+1]=list[j+1],list[j]
    return list

def insert_sort(list):
    list_len=len(list)
    if list_len<2:
        return list
    for i in range(1,list_len):
        key=list[i]
        j=i-1
        while j>=0 and list[j]>key:
            list[j+1]=list[j]
            j=j-1
        list[j+1]=key
    return list

def select_sort(list):
    list_len=len(list)
    for i in range(0,list_len):
        min=i
        for j in range(i+1,list_len):
            if list[j]<list[min]:
                min=j
        if min!=i:
            list[i],list[min]=list[min],list[i]
    return list

def q_sort(list,start,end):
    i=start
    j=end
    key=list[start]
    while i<j:
        while i<j and list[j]>=key:
            j=j-1
        list[i]=list[j]
        while i<j and list[i]<=key:
            i=i+1
        list[j]=list[i]
    list[i]=key
    if(i!=start):
        q_sort(list,start,i-1)
    if(j!=end):
        q_sort(list,j+1,end)

list=[3,45,6,78,34,56,76,5,1,2,4,5,6]
q_sort(list,0,len(list)-1)
print list

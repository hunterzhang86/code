def lie_sort(list):
    for i in range(len(list[0])):
        for j in range(len(list)):
            for k in range(len(list)-j-1):
                if list[k][i]>list[k+1][i]:
                    list[k][i],list[k+1][i]=list[k+1][i],list[k][i]
    return list
            

list=[[1,5,2,6],[2,3,5,1],[7,4,6,2]]
list=lie_sort(list)
for i in range(len(list)):
    print list[i]
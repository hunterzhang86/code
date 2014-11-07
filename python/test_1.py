def bubble_sort(sort_list):
    iter_len = len(sort_list)
    if iter_len < 2:
        return sort_list
    for i in range(iter_len-1):
        for j in range(iter_len-i-1):
            if sort_list[j] > sort_list[j+1]:
                sort_list[j], sort_list[j+1] = sort_list[j+1], sort_list[j]
    return sort_list


list=[3,45,6,78,34,56,76,5,1,2,4,5,6]
list=bubble_sort(list)
print list

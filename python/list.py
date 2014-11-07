list=['apple','mango','carrot','banana']

for item in list:
    print item
    
print len(list)

list.append('rice')
print len(list)
print list

list.sort()
print list

del list[1]
print list

print list[0:2]
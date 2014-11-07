ab={'hunter' : '24' , 'liu' : '25', 'fu' : '33'}
print ab

print ab['hunter']

del ab['hunter']

print ab


for name,address in ab.items():
    print '%s : %s'%(name,address)

if 'liu' in ab:
    print ab['liu']
    
import cPickle as p

file_name='file.txt'

list=['apple','mango','carrot']

f=file(file_name,'w')
p.dump(list,f)
f.close

del list

f=file(file_name)
storedlist=p.load(f)

print storedlist
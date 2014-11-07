import sys
import cPickle as p

file_name='dict_address.txt'
try:
        #f=file(file_name,'w')
        #info={'hunter':['hunter@hnu.cn','4311215','me']}
        #p.dump(info,f)
        f=file(file_name)
        info=p.load(f)
        f.close()
        print 'init success,please enter instruct.'
except:
        print 'open file error'
        sys.exit()
def delete(name):
        if info.has_key(name):
                del info[name]
                f=file(file_name,'w')
                p.dump(info,f)
                f.close()        
                print 'delete success!'
        else:
                print 'Don\'t have ',name        
def insert(name,email,tel,category):
        if info.has_key(name):
                print 'already have %s'%s
                return
        info[name]=[email,tel,category]
        f=file(file_name,'w')
        p.dump(info,f)
        f.close()
        print 'Insert success!'
def search(name):
        if info.has_key(name):
                print '           name                     email           tel    category'
                print '%15s  %24s  %12s  %10s'%(name,info[name][0],info[name][1],info[name][2])
        else:
                print 'Don\'t have ',name
def modify(name,email,tel,category):
        if info.has_key(name):
                info[name]=[email,tel,category]
                f=file(file_name,'w')
                p.dump(info,f)
                f.close()
                print 'modify %s success!'%name
        else:
                print 'Don\'t have ',name

def print_record(name):
        if info.has_key(name):
                print '           name                     email           tel    category'
                print '%15s  %24s  %12s  %10s'%(name,info[name][0],info[name][1],info[name][2])
        else:
                print 'Don\'t have ',name

def print_category(category):
        count=0
        print '           name                     email           tel    category'
        for name in info:
                if info[name][2]==category:
                        count=count+1
                        print '%15s  %24s  %12s  %10s'%(name,info[name][0],info[name][1],info[name][2])
        print '\n          have %d record'%count

def print_all():
        count=0
        print '           name                     email           tel    category'
        for name in info:
                count=count+1
                print '%15s  %24s  %12s  %10s'%(name,info[name][0],info[name][1],info[name][2])
        print '\n           have %d record'%count
        
def quit():
        print 'exit success!'

flag=True
while flag:
        try:
                instruct=raw_input()
                if instruct=='quit()':
                        flag=False
                exec(instruct)
        except:
                print 'no this instruct or instruct form error!'
                
print 'DONE'

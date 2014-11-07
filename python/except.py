import sys

try:
    s=raw_input('enter something  --> ')
    
except EOFError:
    print '\n enter something ,please'
    
except:
    print '\n some error occurred'
    
print 'Done'
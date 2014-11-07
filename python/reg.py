import re

def test():
    #strFileName = 'd://test.txt'
    f = file('d://test.txt')
    # if no mode is specified, 'r'ead mode is assumed by default
    while True:
        line = f.readline()
        if len(line) == 0: # Zero length indicates EOF
            break
        re.sub('5603901778941014923', ' ', line)
        print line,
        # Notice comma to avoid automatic newline added by Python
    f.close() # close the file     
    #result = re.sub('/w,/w,/w,*,,,', ' ', strFileName)
    #if result==True:
    #   print 'yes'
    #    return

if __name__ == '__main__':
    test()


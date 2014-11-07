import sys
import urllib


def process_file(reader):
    '''Read and print the contents or reader.'''
    
    for line in reader:
        line=line.strip()
        print line
        
if __name__=="__main__":
    webpage=urllib.urlopen("http://www.baidu.com")
    process_file(webpage)
    webpage.close()

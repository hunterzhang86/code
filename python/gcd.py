#ֱ������س���ʱ��������
def gcd(m,n):
    while(n!=0):
        rem=m%n
        m=n
        n=rem
    return m


while True:
    m=input('Enter m:')
    n=input('Enter n:')
    if(m==0&n==0):
        break
    print gcd(m,n)

print 'Done'

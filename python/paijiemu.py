flag=True
while flag:
    n=int(raw_input())
    start=[]
    end=[]
    if n!=0:
        for i in range(n):
            start.append(int(raw_input()))
            end.append(int(raw_input()))
        for i in range(n):
            for j in range(n-i-1):
                if end[j]>end[j+1]:
                    start[j],start[j+1]=start[j+1],start[j]
                    end[j],end[j+1]=end[j+1],end[j]
        count=1
        key=end[0]
        for i in range(1,n):
            if start[i]>=key:
                count=count+1
                right=end[i]
        print count
    else:
        flag=False
        

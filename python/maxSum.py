def maxSum(a,len):
    curSum=0
    maxSum=0
    for i in range(0,len):
        if a[i]+maxSum<0:
            curSum=0
        else:
            curSum+=a[i]
            maxSum=max(maxSum,curSum)
    return maxSum

if __name__ == '__main__' :
    a=[6,7,2,3,-4,3]
    print maxSum(a,len(a))
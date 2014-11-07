def Reverse(str,len_str):
    left=0
    right=len_str-1
    while left<right:
        str[left],str[right]=str[right],str[left]
        left=left+1
        right=right-1
    return str

str=['H','u','n','t','e','r']
print Reverse(str,len(str))
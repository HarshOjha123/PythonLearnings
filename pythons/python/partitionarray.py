def equalSum( arr):
    res=sum(arr)
    if(res%3!=0):
        return False
    res=res//3
    li=0
    sm=0
    for i in arr:
        sm+=i
        if(sm==res):
            li+=1
            sm=0
        if(li==3):
            return True
    return li==3
arr1=[0,2,1,-6,6,-7,9,1,2,0,1]
result=equalSum(arr1)
print(result)

def rotated_array(arr,k):
    i=0
    n=len(arr)
    for x in range(n):
        if k<n & (x<k):
            arr[x]=arr[k]
            k+=1
        elif((x>=k) & (x<n)):
            arr[x]=arr[i]
            i+=1
    return arr            
def searchElement(arr,target):
    for x in range(len(arr)):
        if x==target:
            print(True)
arr1=[0,1,2,4,4,4,5,6,6,7]
k=5        
r=rotated_array(arr1,k)
keyvalue=0
result=searchElement(r,keyvalue)




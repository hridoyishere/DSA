# Linear Search 
# target = 6
# Example arr=[1,2,3,4,5,6,7,8,9,10]


def Serch(arr,target):
    if not arr:
        return
    
    for n in arr:
        if(n ==target):
            return n
    
    return False


arr=[1,2,3,4,5,6,7,8,9,10]
target=6

print(Serch(arr,target))
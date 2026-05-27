# Find Missing Number
# Example arr=[1,2,3,4,6,7,8,9,10]
# output = 5


def Find (arr):
    if not arr:
        return
    
    n=len(arr)+1
    total= n * (n + 1) // 2
    currentSum =0

    for i in arr:
        currentSum +=i
    
    missing=total -currentSum
    return missing


arr=[1,2,3,4,6,7,8,9,10]
print(Find(arr))
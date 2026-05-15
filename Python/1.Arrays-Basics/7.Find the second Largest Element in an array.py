

# Find Second Largest Element in an Array
#example: arr= [10,11, 5, 8, 20, 3] => output: 10


def second(arr):
    if not arr:
        return
    
    largest=0
    second=0
    
    for n in arr:
        if(n > largest):
            second=largest
            largest=n
        elif(n>second and  n!=largest):
            second=n
    
    return second

arr=[10,11,5,8,20,3]

print("The Second Largest number is :",second(arr))
# Find Second Largest Element in an Array
#example: arr[] = {10, 5, 8, 20, 3} => output: 10


def second_largest(arr):
    
    largest=arr[0]
    second_largest=arr[0]
    for i in range(1,len(arr)):
        if arr[i]>largest:
            second_largest=largest
            largest=arr[i]
        elif arr[i]>second_largest and arr[i]!=largest:
            second_largest=arr[i]
    return second_largest


arr=[10, 5, 8, 20, 3]
print("Second Largest Element is:",second_largest(arr))
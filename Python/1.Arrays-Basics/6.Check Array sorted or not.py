#Check array sorted or not 
#example arry=[1,2,3,4,5,], output =yes


def IsSorted(arr):

    for n in range(len(arr)-1):

        if (arr[n] > arr[n+1]):
            return False
        
    return True

arr=[1,2,3,4,5,]

if(IsSorted(arr)):
    print("Array is sorted")
else:
    print("Array is not sorted")
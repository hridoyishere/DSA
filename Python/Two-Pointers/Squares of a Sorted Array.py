# Squares of a Sorted Array
# Given an integer array sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
# Example input = [-4, -1, 0, 3, 10]  output = [ 0, 1, 9, 16, 100 ]



def SortedSquares(arr):
    left=0
    right=len(arr)-1
    result = [None] * len(arr)
    position= len(arr)-1

    while left<=right:
        leftSq=arr[left]*arr[left]
        rightSq=arr[right]*arr[right]

        if leftSq>rightSq:
            result[position]=leftSq
            left+=1
        else:
            result[position]=rightSq
            right-=1
        position-=1

    return result

print(SortedSquares([-4, -1, 0, 3, 10]))
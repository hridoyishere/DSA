# Find Minimum Element in an Array
# Example array = [3, 5, 7, 2, 8] output = 2

def find_min(arr):
    if not arr:
        return None
    min_element = arr[1]

    for n in arr:
        if n < min_element:
            min_element = n

    return min_element

arr=[3,5,7,2,8]
print("Minmum Element of array:",find_min(arr))
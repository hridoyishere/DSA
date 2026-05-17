# Rotate Array 
# Example arr=[1,2,3,4,5,6,7,8]; 
# output = [8,7,6,5,4,3,2,1]


def Rotate(arr):
    if not arr:
        return

    rotated_arr = []

    for i in range(len(arr)-1, -1, -1):
        rotated_arr.append(arr[i])

    return rotated_arr


arr = [1,2,3,4,5,6,7,8]

print(Rotate(arr))
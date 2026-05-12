# Reverse array
# examaple arr=[1,2,3,4,5,6,7,8,9,10,11]; output= 11,10,9,8,7,6,5,4,3,2,1


def Reverse(arr):
    if not arr:
        return None

    reverseArr = []

    for i in range(len(arr) - 1, -1, -1):
        reverseArr.append(arr[i])

    return reverseArr


arr = [1,2,3,4,5,6,7,8,9,10,11]
print(Reverse(arr))
def RemoveDuplicates(arr):
    j = 0

    for i in range(1, len(arr)):
        if arr[j] != arr[i]:
            j += 1
            arr[j] = arr[i]

    return j + 1


arr = [1, 1, 1, 1, 2, 2, 2, 3, 3]

newArrSize = RemoveDuplicates(arr)

for i in range(newArrSize):
    print(arr[i])
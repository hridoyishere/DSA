# Remove Duplicates from the array
# Examples arr=[1,2,2,3,4,5,6,7,8,9,8,9], output =[1,3,4,5,6,7,]


def remove(arr):

    result = []

    for num in arr:
        if arr.count(num) == 1:
            result.append(num)

    return result


arr = [1,2,2,3,4,5,6,7,8,9,8,9]

print("Removed duplicates :",remove(arr))
    
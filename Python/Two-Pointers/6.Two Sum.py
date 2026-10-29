def two_sum(nums, target):
    for i in range(len(nums)):
        need = target - nums[i]
        for j in range(i + 1, len(nums)):
            if nums[j] == need:
                return (i, j)
    return (-1, -1)


nums = [2, 7, 11, 15]
target = 9
print(two_sum(nums, target))   # (0, 1)
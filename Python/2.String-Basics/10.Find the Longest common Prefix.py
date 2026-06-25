# Find the common prefix
# arr = ["flower","flow","flight"]
# Output = "fl"

def Find(arr):

    if not arr:
        return ""

    prefix = arr[0]

    for word in arr[1:]:

        while not word.startswith(prefix):
            prefix = prefix[:-1]

        if prefix == "":
            return ""

    return prefix


arr = ["flower", "flow", "flight"]

print(Find(arr))
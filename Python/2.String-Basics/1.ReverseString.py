# Reverse a String
# Create a function that takes a string as argument and returns the reversed string.
# Examples
# reverse_string("Hello World") ➞ "dlroW olleH"

def reverse_string(s):
    chars = list(s)
    left, right = 0, len(chars) - 1
    while left < right:
        chars[left], chars[right] = chars[right], chars[left]
        left += 1
        right -= 1
    return ''.join(chars)

print(reverse_string("Hello World"))

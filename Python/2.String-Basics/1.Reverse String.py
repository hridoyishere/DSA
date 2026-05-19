# Reverse a String
# Examples
# reverse_string("Hello World") ➞ "dlroW olleH"

def reverse_string(text):

    reversed_text = ""

    for i in range(len(text)-1, -1, -1):
        reversed_text += text[i]

    return reversed_text


print(reverse_string("Hello World"))



# Check Palindrome String or not 
# example str= "racecar" output= not Palindrome string


def Check(text):

    start = 0
    end = len(text) - 1

    while start < end:

        if text[start] != text[end]:
            return False

        start += 1
        end -= 1

    return True


text = "racecar"

print(Check(text))

# Check Anagram
# Example 
# str1="listen", str2="silent"; output=true



def Check(str1, str2):
    if len(str1) != len(str2):
        return False
    
    temp = list(str1)
    
    for c in str2:

        for i in range(len(temp)):
            if temp[i] == c:
                temp.pop(i)
                break
        else:
            return False
    
    return True


str1 = "listen"
str2 = "silent"
print(Check(str1, str2))
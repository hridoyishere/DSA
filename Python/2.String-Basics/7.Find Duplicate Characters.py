# Find duplicate Characters
# Example text= "programming"
# output = r g m


def Find(text):
    if not text:
        return False
    duplicate=""
    
    for i in range(len(text)):

        for j in range(i+1,len(text)):

            if text[i] == text[j]:

                duplicate +=text[i]
    
    return duplicate

text ="programming"
print(Find(text))

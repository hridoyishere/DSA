# Remove Spaces From String 
# Example text= "I love Programming"
# output = IloveProgramming"

def Remove(text):
    if not text:
        return
    
    newText=""
    
    for c in text:
        if c !=" ":
            newText +=c
    return newText

text = "I love Programming"

print(Remove(text))
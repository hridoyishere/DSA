# Find the largest word in sentence 
# sentence ="I love Programming"
# output= Programmig


def Find (text):
    if not text:
        return
    word=""
    largest=""
    
    for c in text:
        if c !=" ":
            word+=c
        else:
            if len(word)>len(largest):
                largest=word

            word=""
    
    if len(word)>len(largest):
        largest=word
    
    return largest

text="I love Programming"

print(Find(text))
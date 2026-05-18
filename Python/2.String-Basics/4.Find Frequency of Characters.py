# Find Frequency of Characters
# Example 
# text = "hello how are you bro"; 
# output {'h': 2, 'e': 2, 'l': 2, 'o': 4, ' ': 4, 'w': 1, 'a': 1, 'r': 2, 'y': 1, 'u': 1, 'b': 1}


def Find(text):
    if not text:
        return
    
    freq={}

    for c in text:

        if c in freq:
            freq[c] +=1
        else:
            freq[c] = 1

    return freq



text= "hello how are you bro"

print("The Frequency of Characters:",Find(text))
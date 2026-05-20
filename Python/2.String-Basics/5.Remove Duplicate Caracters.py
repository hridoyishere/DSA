# Remove Duplicate Caracters
# Example
# text="hhelloo"; output= eiptm

def Remove(text):
    if not text:
        return
    
    new={}

    for c in text :
        if c in new:
            new[c] +=1
        else:
            new[c] =1

    Result=""
    for i in text:
        if new[i] == 1:
            Result += i

    return Result

print(Remove("hhellooipltm"))
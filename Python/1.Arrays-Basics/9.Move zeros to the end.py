# Moves zeros to the end
# example arr=[1,5,0,4,6,0,5,8,] ; output =[1,5,4,6,5,8,0,0]


def Move(arr):
    if not arr:
        return
    
    newArr=[]
    zeros=[]
    
    for n in arr:
        if n ==0:
            zeros.append(n)
        else:
            newArr.append(n)
    
    for n in zeros:
        if n == 0:
            newArr.append(n)

    return newArr

arr=[1,5,0,4,6,0,5,8,]
print("Moved zeros in the end :",Move(arr))
# find Even and Odd numbers 
# examaple arr=[1,2,3,4,5,6,7,8,910,11]; output= Even 2,4,6,8, Odd 1,3,5,7,9


arr_input = input("Enter numbers separated by space: ")

arr = list(map(int, arr_input.split()))


Even=[]
Odd=[]


for n in arr:
    if(n%2 == 0):
        Even.append(n)
    else:
        Odd.append(n)

print("even:",Even,"odd:",Odd)

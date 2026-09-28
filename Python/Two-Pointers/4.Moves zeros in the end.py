def MOVEZEROS(ARR):
    IND=0
    for I in range(len(ARR)):
        if(ARR[I]!=0):
            ARR[IND]=ARR[I]
            IND+=1
    while IND<len(ARR):
        ARR[IND]=0
        IND+=1
    return ARR

ARRAY=[0,1,0,3,12]

print(MOVEZEROS(ARRAY))
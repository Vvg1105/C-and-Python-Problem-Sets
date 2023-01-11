l=[8,7,3,4,6]
a=0
b=0
for position in range(0,len(l)):
    #Traverses through the list n number of times
    for position1 in range(0,len(l)-1):
        #Traverses through the lits n number of times too but this time it is n-1
        #If the current number is less than the next number
        if(l[position1]>l[position1+1]):
            #Then it will swap the values
            a=l[position1]
            b=l[position1+1]
            l[position1]=b
            l[position1+1]=a
            #This is used just to check
            print(l)
print(l)

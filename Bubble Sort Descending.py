l=[8,7,2,4,6]
a=0
b=0
new_l=[]
for position in range(0,len(l)):
    for position1 in range(len(l)-1):
        if(l[position1]<l[position1+1]):
            a=l[position1]
            b=l[position1+1]
            l[position1]=b
            l[position1+1]=a
print(l)

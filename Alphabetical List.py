a=str(input("Please type in a word: "))
l=[]
l.insert(0,a)
flag=True
while(a!='stop'):
    a=str(input("Please type in a word: "))
    flag=True
    if(a=='stop'):
        break
    for position in range(0,len(l)):
        if(l[position]>a):
            flag=False
            l.insert(position,a)
            break
    if(flag==True):
        l.append(a)
print(l)

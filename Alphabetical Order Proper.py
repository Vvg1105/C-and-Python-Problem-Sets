string=str(input("Please type in a string:"))
b=string
l=['']
l[0]+=string
while(string!='stop'):
    string=str(input("Please type in a string:"))
    if(string>b):
        l+=string
    elif(b>string):
        l[0]+=string
print(l)
    

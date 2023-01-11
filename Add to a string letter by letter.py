string1=str(input("Please enter a word: "))
string2=str(input("Please enter another word: "))
a=len(string2)
position=0
while True:
    if(position<a):
        string1+=string2[position]
        print(string1)
        position=position+1
    elif(position>=a):
        break

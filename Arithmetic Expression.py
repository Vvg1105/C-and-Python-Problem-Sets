expression=input("Please type in an arithmetic expression: ")
numbers='1234567890'
operations='*-+/'
a=int(expression[0])
b=0
c=''
ans=0
count=0
for position in range(1,len(expression)):
    if expression[position] not in operations and count==0:
        a=a*10
        a+=int(expression[position])
    elif expression[position]=='*':
        c=expression[position]
        count+=1
    elif expression[position]=='/':
        c=expression[position]
        count+=1
    elif expression[position]=='+':
        c=expression[position]
        count+=1
    elif expression[position]=='-':
        c=expression[position]
        count+=1
    elif(expression[position] not in operations and count>0):
         b=b*10
         b+=int(expression[position])
print(a)
print(b)
if c=='+':
    ans=(a+b)
if c=='-':
    ans=(a-b)
if c=='*':
    ans=(a*b)
if c=='/':
    ans=(a/b)
print(ans)

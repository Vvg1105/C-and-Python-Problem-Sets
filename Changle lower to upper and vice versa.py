string=str(input("Please type in a string with a mix of lowercase and uppercase letters: "))
newstring=""
for letter in string:
    if(letter.islower()):
        newstring+=letter.upper()
    else:
        newstring+=letter.lower()
print(newstring)

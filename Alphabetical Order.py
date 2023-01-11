a=str(input("Please type in a word: "))
b=str(input("Please type in another word: "))
if(b<a):
    print(b,' is alphabetically ahead of ',a)
if(a<b):
    print(a,' is alphabetically ahead of ',b)
if(a==b):
    print('Both words are the same')

_list=[8,10,15,30,40]
#You need a sorted list
value1=int(input("Please type in a number between 0 and 40: "))
def binary_search(l,value):
    low=0
    high=len(l)-1
    #High has been given the length of the list -1
    while True:
        #While loop to choose when to break
        #Mid is given by finding the average of high and low.
        mid=(high+low)//2
        if(low>high):
            return value,"is not in the list: ",l
            break
        #if the value given to the mid index in the list is equal to the target value.
        elif(l[mid]==value):
            return value,"is in the list: ",l,"at value",mid
            break
        #So if the value is higher than the l[mid] which means that it is a larger number as it is a sorted list.
        #low becomes the index of mid +1, so it takes the log n as we looked in merge sort
        #As it is a while loop, it will continue until break has been called so imagine mid is 2 because 4+0//2 =2 as is shown in this case,
        #low becomes mid +1 which means low becomes 3 and it will reduce the size of the list from index values 3-4.
        elif(value>l[mid]):
            low=mid+1
        #This is basically the same as the explanation above
        #If value is greater than the value assigned to the mid in l[mid]
        #Then it will take the lower half of the list
        elif(value<l[mid]):
            high=mid-1
answer=binary_search(_list,value1)
print(answer)
#Divide and Conquer each time it divides it needs log n+1
#But +1 becomes tiny when n becomes larger
#So the time complexity becomes O(log n)
#And the best case scenraio is O(1) if the value is equal to the first l[mid] being iterated
#Space complexity becomes O(1)

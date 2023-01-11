#include <stdio.h>
int main ( )
{
    int arr[4];
    int position;
    int c;
    int count=0;
    int count1=0;
    for(position=0;position<=3;position=position+1)
    {
        printf("Please type in the numbers of the array: ");
        scanf("%d",&arr[position]);
    }
    for(position=0;position<=3;position=position+1)
    {
    c=arr[position];
    while(arr[position]!=0)
    {
        arr[position]=arr[position]/10;
        count=count+1;
    }
    if(count>=2)
        count1=count1+1;
        count=0;
    }
printf("There are %d numbers which have more than two digits in the array. ",count1);
}

#include <stdio.h>
int main ( )
{
    int values[5];
    int count=0;
    int count1=0;
    int a;
    printf("Enter 5 numbers: ");
    for(a=0;a<=4;a=a+1)
    {
      scanf("%d",&values[a]);
    }
    for(a=1;a<=4;a=a+1)
    {
        if(values[a]>values[a-1])
        {
            count=count+1;
        }
    }
    for(a=0;a<=4;a=a+1)
    {
        if(values[a]>values[a+1])
        {
            count1=count1+1;
        }
    }
    if(count==4)
    {
        printf("The integer array is ascending.");
    }
    if(count1==4)
    {
        printf("The integer array is descending.");
    }
    else if(count!=4&&count1!=4)
        printf("There is no correlation(neither)");
}

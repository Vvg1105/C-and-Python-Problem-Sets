#include <stdio.h>
int main ( )
{
    int arr[5];
    int position;
    int c;
    printf("Enter 5 values of the array:\n");
    for(position=0;position<=4;position=position+1)
    {
        scanf("%d",&arr[position]);
    }
    for(position=0;position<=3;position=position+2)
    {
        c=arr[position];
        arr[position]=arr[position+1];
        arr[position+1]=c;
    }
    for(position=0;position<=4;position=position+1)
    {
        printf("%d ",arr[position]);
    }
}

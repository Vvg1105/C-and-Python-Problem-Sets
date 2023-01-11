#include <stdio.h>
int main ( )
{
    int position;
    int sum=0;
    int arr[5];
    printf("Please type in an array consisting of 5 numbers: \n");
    for(position=0;position<=4;position=position+1)
    {
        scanf("%d",&arr[position]);
    }
    for(position=0;position<=4;position=position+1)
    {
        if(arr[position]%10==8)
            sum=sum+1;
    }
    printf("There are %d digits ending with the number 8.",sum);
}

#include <stdio.h>
int main ( )
{
    int position;
    int value;
    int arr[5]={14567,2453,312,4589,1345};
    for(position=0;position<=4;position=position+2)
    {
            printf("%d ",arr[position]);
    }
}

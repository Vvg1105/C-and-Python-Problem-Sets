#include <stdio.h>
int main ( )
{
    int arr[4]={5,10,20,8};
    int position;
    float average = 0;
    float sum;
 for(position=0;position<=3;position=position +1)
    {
        average=average +arr[position];
    }
    average=average/4;
    printf("%f",average);

     for(position=0;position<=3;position=position +1)
     {
         if(average < arr[position])
            sum=sum+arr[position];
     }
      printf("\n%f",sum);
}
//First find the average of the numbers of the array.
//Go through the array and find the sum of those values which are above the average.//

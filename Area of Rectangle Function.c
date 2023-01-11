#include <stdio.h>
float area(float a,float b)
{
    float ans =a*b;
    return ans;
}
int main ( )
{
    float c;
    float d;
    float e;
    float f;
    printf("Please type in the length of the rectangle: ");
    scanf("%f",&c);
    printf("Please type in the width of the rectangle: ");
    scanf("%f",&d);
    float ans1= area(c,d);
    printf("Please type in the length of the 2nd rectangle: ");
    scanf("%f",&e);
    printf("Please type in the width of the  2nd rectangle: ");
    scanf("%f",&f);
    float ans2=area(e,f);
    float difference = ans1-ans2;
    if(ans1<ans2)
    {
        difference=ans2-ans1;
        printf("%f is larger than %f",an2,ans1);
        printf("%fcm^2",difference);
    }
    else if(difference==0)
        printf("Both rectangles have the same area.");
    else
        printf("The difference between both the rectangles is %f",difference);
}

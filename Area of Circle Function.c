#include <stdio.h>
float multiply(float a, float r)
{
    float ans=a*r*r;
    return ans;
}
int main ( )
{
    float x=3.14;
    printf("Please type in the radius of the circle: ");
    float y;
    scanf("%f",&y);
    float ans2;
    ans2=multiply(x,y);
    printf("%fcm^2",ans2);
}


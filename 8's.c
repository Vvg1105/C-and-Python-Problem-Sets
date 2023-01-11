#include <stdio.h>
int main ( )
{
    int a;
    int b;
    int c;
    int count=0;
    printf("Please type in a number: \n");
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        b=a%10;
        if(b==8)
        {
            count=count+1;
        }
        a=a/10;
    }
    printf("There are %d 8's in the number %d",count,c);
}

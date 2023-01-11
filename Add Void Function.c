#include <stdio.h>
void add(int a,int b)
{
    int c=a+b;
    printf("%d",c);
}
int main ( )
{
    printf("Please type in a number: ");
    int a;
    scanf("%d",&a);
    printf("Please type in another number: ");
    int b;
    scanf("%d",&b);
    add(a,b);
}

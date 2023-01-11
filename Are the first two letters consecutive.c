#include <stdio.h>
int main ( )
{
    printf("Please type in a word. Make sure all the letters should not be in capitals: ");
    char a[10];
    scanf("%s",a);
    if(a[0]+1==a[1]||a[0]-1==a[1])
        printf("The the first two letters are consecutive.");
    else
        printf("The first two letters are not consecutive.");
}

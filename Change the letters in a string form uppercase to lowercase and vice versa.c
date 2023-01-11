#include <stdio.h>
int main ( )
{
    printf("Please type in a word: ");
    char a[100];
    scanf("%s",a);
    int position=0;
    while(a[position]!=0)
    {
        if(a[position]>=97&&a[position]<=122)
        {
            a[position]=a[position]-32;
        }
        else if(a[position]>=65&&a[position]<=90)
        {
            a[position]=a[position]+32;
        }
        position=position+1;
    }
    printf("%s",a);
}

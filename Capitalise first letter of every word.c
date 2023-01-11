#include <stdio.h>
int main ( )
{
    char a[100];
    printf("Please type in something: ");
    scanf("%[^\n]s",a);
    int position;
    for(position=0;a[position]!=0;position=position+1)
    {
        if(a[position]==' '&&a[position+1]>=97&&a[position+1]<=122)
        {
            position=position+1;
            a[position]=a[position]-32;
        }
        if(position==0&&a[position+1]>=97&&a[position+1]<=122)
            a[position]=a[position]-32;
    }
    printf("%s",a);
}

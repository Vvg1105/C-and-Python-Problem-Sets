#include <stdio.h>
int main ( )
{
    char a[100];
    int position=0;
    int b=0;
    int c=0;
    int position1;
    printf("Please type in your name: ");
    scanf("%s",a);
    for(position1=0;a[position1]!=0;position1=position1+1)
    {
        c=c+1;
    }
    for(position=0;a[position]!=0;position=position+1)
    {
        if(position==0)
        {
            if(a[position]=='v'||a[position]=='V')
                b=b+1;
        }
        else if(position==c-1)
        {
            if(a[position]=='t')
                b=b+1;
        }
    }
    if(b==2)
        printf("%s is eligible for bonus marks.",a);
    else
        printf("%s is not eligible for bonus marks.",a);
}

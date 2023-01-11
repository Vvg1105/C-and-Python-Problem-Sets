#include <stdio.h>
int main ( )
{
    char a[100];
    printf("Please type in a string: ");
    scanf("%[^\n]s",a);
    int countlen =0;
    int position;
    int countconst=0;
    for(position=0;a[position]!=0;position=position+1)
    {
        countlen=countlen+1;
    }
    for(position=0;a[position]!=0;position=position+1)
    {
        if(countlen%2==0)
        {
            if(a[position]=='a'||a[position]=='e'||a[position]=='i'||a[position]=='o'||a[position]=='u')
            {
                a[position]=a[position]+1;
            }
            else
            {
                if(a[position]==121||a[position]==122)
                {
                    a[position]=a[position]-24;
                }
                else
                    a[position]=a[position]+2;
            }
        }
        else if(countlen%2!=0)
        {
            if(a[position]!='a'&&a[position]!='e'&&a[position]!='i'&&a[position]!='o'&&a[position]!='u')
            {
                countconst=countconst+1;
            }
        }
    }
    printf("The length is %d\nAnd the string is: ",countlen);
    for(position=0;a[position]!=0;position=position+1)
    {
        printf("%c",a[position]);
    }
    printf("\nThe number of consonants are %d.",countconst);
}

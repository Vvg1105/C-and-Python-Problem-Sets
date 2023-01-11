#include <stdio.h>
int main ( )
{
    int ticketno[7] = {153,163,134,123,167,146,149};
    float price[7] = {3,8,14,32,45.5,43.2,67.8};
    int isSold[7] = {1,1,1,1,1,0,1};
    int position;
    int value;
    int position2;
    for(position=0;position<=6;position=position+1)
    printf("%d ",ticketno[position]);
    printf("\nThese are the ticket numbers. Which ticket number do you want to buy: ");
    scanf("%d",&value);
    for(position=0;position<=6;position=position+1)
    {
        if(value==ticketno[position])
        {
            if(isSold[position]==0)
            {
                printf("\nYou can have the ticket but you have to pay $%f",price[position]);
                isSold[position]=1;
            }
            else
            {
                printf("\nThis ticket is sold.");
                printf("The following tickets are unsold:\n");
                for(position2=0;position2<=6;position2=position2+1)
                {
                    if(isSold[position2]==0)
                    {
                        printf("\nThe ticket number is %d. You may buy this ticket for $%f much",ticketno[position2],price[position2]);
                    }
                }
            }
        }
    }
}

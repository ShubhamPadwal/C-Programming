// WAP TO PRINT SUM OF ALL NUMBERS FROM 10 TO 5 

#include <stdio.h>
int main()
{
    int i;
    int s=0;

    for(i=10; i>=5; i--)
    {
        s=s+i;
    }
        printf("\nSum is: %d ",s);
        return 0;
}
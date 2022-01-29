// WAP TO PRINT THE SUM OF SQUARE OF ALL NUMBERS FROM 1 TO 5

#include<stdio.h>
int main()
{
    int i;
    int s=0;

    for (i=1; i<=5; i++)
    {
        s=s+i*i;
    }
    printf("Sum of square of all no. is: %d",s);
    return 0;
}
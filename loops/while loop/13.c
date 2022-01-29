// WAP TO PRINT THE SUM OF SQUARE OF ALL NUMBERS FROM 1 TO 5

#include<stdio.h>
int main()
{
    int i=1;
    int s=0;

    while (i<=5)
    {
        s=s+i*i;
        i++;
    }
    printf("The sum of square of all numbers is %d",s);

    return 0;    
}
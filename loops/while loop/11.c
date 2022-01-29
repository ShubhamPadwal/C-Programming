// WAP TO PRINT THE SUM OF ALL NUMBERS FROM 1 TO 5

#include<stdio.h>
int main()
{
    int i=1;
    int s=0;

    while (i<=5)
    {
        s=s+i;
        i++;
    }

    printf("The sum of numbers is:%d",s);
    return 0;   
}
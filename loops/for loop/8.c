// WAP TO PRINT THE SUM OF ALL NUMBERS FROM 1 TO 5

#include<stdio.h>
int main()
{
    int i;
    int s=0;

    for (i=1; i<=5; i++)
    {
        s=s+i;
    }
    printf("Sum is:%d",s);
    return 0;
}
// WAP TO PRINT THE SUM OF ALL ALTERNATE NUMBERS FROM 1 TO 10

#include<stdio.h>
int main()
{
    int i;
    int s=0;

    for (i=1; i<=10;i=i+2)
    {
        s=s+i;
    }
    printf("Sum is: %d",s);
    return 0;
}
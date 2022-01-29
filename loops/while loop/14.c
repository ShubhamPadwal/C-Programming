// WAP TO READ THE NUMBER AND PRINT SUM OF SQUARE OF ALL NUMBERS FROM 1 TO THAT NUMBER

#include<stdio.h>
int main()
{
    int i=1;
    int n;
    int s=0;

    printf("Enter the number:");
    scanf("%d",&n);

    while (i<=n)
    {
        s=s+i*i;
        i++;
    }

    printf("The sum of square of all numbers is:%d",s);

    return 0;    
}
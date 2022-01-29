// WAP TO READ THE NUMBER AND PRINT SUM OF ALL NUMBERS FROM 1 TO THAT NUMBER

#include<stdio.h>
int main()
{
    int i=1;
    int s=0;
    int n;

    printf("Enter the number:");
    scanf("%d",&n);

    while (i<=n)
    {
        s=s+i;
        i++;
    }
    printf("The sum is:%d",s);
    return 0;
}
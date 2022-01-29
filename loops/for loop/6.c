// WAP TO READ NUMBER AND PRINT ALL NUMBERS FROM 1 TO THAT NUMBER

#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter the number:");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
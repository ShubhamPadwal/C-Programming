// WAP TO READ ANY NUMBER AND PRINT ALL NUMBERS FROM 1 TO THAT NUMBER

#include<stdio.h>
int main()
{
    int i=1;
    int n;

    printf("Enter The Number:");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}
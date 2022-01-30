// WAP TO PRINT PATTERN
/*         1 3 5 7 9
           1 3 5 7 9
           1 3 5 7 9          */

#include<stdio.h>
int main()           
{
    int i,n;

    for(n=1; n<=3; n++)
    {
        for(i=1; i<=9;i=i+2)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
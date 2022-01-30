// WAP TO PRINT PATTERN
/*         1 2 3 4 5
           5 4 3 2 1
           1 2 3 4 5 
           5 4 3 2 1          */

#include<stdio.h>
int main()           
{
    int i,n;

    for(n=1; n<=2;n++)
    {
        for(i=1; i<=5; i++)
        {
            printf(" %d",i);
        }

        printf("\n");

        for(i=5; i>=1; i--)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}

// WAP TO PRINT PATTERN
/*         5 4 3 2 1
           5 4 3 2 1
           5 4 3 2 1
           5 4 3 2 1           */

#include<stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=4; n++)
    {
        for(i=5; i>=1; i--)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
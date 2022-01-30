// WAP TO PRINT PATTERN
/*         9 8 7 6 5
           9 8 7 6 5
           9 8 7 6 5          */

#include<stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=3; n++)
    {
        for(i=9; i>=5; i--)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
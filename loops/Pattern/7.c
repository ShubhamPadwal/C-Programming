// WAP TO PRINT PATTERN
/*         7 7 7 7 7
           7 7 7 7 7           
           7 7 7 7 7
           7 7 7 7 7           */

#include<stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=4; n++)
    {
        for(i=1; i<=5; i++)
        {
            printf("7 ");
        }
        printf("\n");
    }
    return 0;
}
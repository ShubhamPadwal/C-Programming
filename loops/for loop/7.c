// WAP TO PRINT TABLE OF 7 IN REVERSE ORDER

#include<stdio.h>
int main()
{
    int i,val;

    for (i=10; i>=1; i--)
    {
        val=7*i;
        printf("\n%d",val);
    }
    return 0;
}
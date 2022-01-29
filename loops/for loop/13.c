// WAP TO PRINT ALL NUMBERS AND ALSO PRINT THE SUM OF CUBE OF ALL NUMBERS FROM 5 TO 1

#include<stdio.h>
int main()
{
    int i;
    int s=0;

    for(i=5; i>=1; i--)
    {
        s=s+i*i*i;
    }
    printf("Sum of Cube of all No.is: %d",s);
    return 0;
}
// WAP TO READ PERCENTAGE AND PRINT FOLLOWING CRITERIA.
/*   PER           CLASS
     
     75+           DISTINCTION
     60+           FIRST CLASS
     50+           SECOND CLASS
     40+           PASS
     ELSE          FAIL                                */

#include<stdio.h>
int main()     
{
    float per;

    printf("Enter your percentage:");
    scanf("%f",&per);

    if (per>=75)
    {
        printf("You are in Distinction");
    }

    else if(per>=60)
    {
        printf("You are in first class");
    }

    else if(per>=50)
    {
        printf("You are in second class");
    }

    else if(per>=40)
    {
        printf("You are in pass class");
    }

    else
    {
        printf("You are fail");
    }

    return 0;   
}
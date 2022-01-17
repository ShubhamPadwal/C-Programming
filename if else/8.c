// WAP TO READ PERCENTAGE AND CHECK FOLLOWING CRITERIA.
// PERCENTAGE >=60 --->3.5 PACKAGE COMPANY
// PERCENTAGE >=75 --->7.5 PACKAGE COMPANY

#include<stdio.h>
int main()
{
    float per;

    printf("Enter your percentage:");
    scanf("%f",&per);

    if(per>=60)
    {
        printf("\nEligible for 3.5 package company");
        if (per>=75)
        {
            printf("\nEligible for 7.5 package company");
        }
        
    }
    else
    {
        printf("\nNot eligible for campus placement");
    }

    return 0;
}
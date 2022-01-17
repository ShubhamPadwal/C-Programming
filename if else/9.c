// WAP TO READ AGE AND CHECK CANDIDATE IS ELIGIBLE FOR VOTING OR NOT AND IF AGE MORE THAN 60 THEN PICKUP FACILITY AVAILABLE

#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("\nCandidate is eligible for voting");

        if (age>=60)
        {
            printf("\nPickup facility available");
        }
        
    }

    else
    {
        printf("\nYou are not eligible for voting");
    }
    
    return 0;
}
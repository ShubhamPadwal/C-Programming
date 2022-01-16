// WAP TO READ AGE AND CHECK CANDIDATE IS ELIGIBLE FOR VOTING OR NOT

#include<stdio.h>
int main()
{
    int age;

    printf("Enter Your age: ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\nCandidate is eligible for voting");
    }
    else
    {
        printf("Candidate is not eligible for voting");
    }

    return 0;
}
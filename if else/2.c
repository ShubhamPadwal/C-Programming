// WAP TO READ AGE AND CHECK CANDIDATE IS ELIGIBLE FOR BANK EXAM OR NOT
// (AGE MUST BE 22 TO 30)

#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=22 && age<=30)
    {
        printf("Candidate is eligible for exam");
    }
    else
    {
        printf("Candidate is not eligible for exam");
    }

    return 0;    
}
// WAP TO READ MARKS OF THREE SUBJECTS AND PRINT TOTAL MARKS AND PERCENTAGE AND CHECK THE STUDENT IS PASS OR FAIL AND ALSO CHECK FOR FIRST CLASS

#include<stdio.h>
int main()
{
    int s1,s2,s3,tm;
    float per;

    printf("Enter marks of three subjects:\n");
    scanf("%d %d %d",&s1,&s2,&s3);

    tm=s1+s2+s3;
    per=tm/3;

    printf("\nTotal marks are:%d",tm);

    if(s1>=35 && s2>=35 && s3>=35)
    {
        printf("\nPercentage is:%f",per);
        printf("\nYou are pass !!!");

        if (per>=60)
        {
            printf("\nYou are in first class !!!");
        }

    }
    else
    {
        printf("\nYou are fail !!!");
    }
    
    return 0;
}
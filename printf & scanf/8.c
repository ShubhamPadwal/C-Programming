// WAP TO READ EMPLOYEE NAME,WAGES,WORKING DAYS AND JOB PROFILE AND CALCULATE PAYMENT OF EMPLOYEE

#include <stdio.h>
int main()
{
    char ename[20],job[20];
    int wages,wdays,pay;

    printf("Enter employee name: ");
    scanf("%s",&ename);

    printf("\nEnter job profile of employee: ");
    scanf("%s",&job);

    printf("\nEnter wages and working days: ");
    scanf("%d %d",&wages,&wdays);

    pay=wages*wdays;

    printf("\nEmployee name is: %s",ename);
    printf("\nEmployee's job profile is: %s",job);
    printf("\nPayment of employee is: %d",pay);

    return 0;
}
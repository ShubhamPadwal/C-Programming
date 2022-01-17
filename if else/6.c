// WAP TO READ EMPLOYEE NAME AND WAGES AND WORKING DAYS AND CALCULATE THE PAYMENT OF EMPLOYEE.
// IF PAYMENT MORE THAN 35 THOUSAND THEN 20% TAX WILL BE APPLICABLE.
// DISPLAY TOTAL PAYMENT
// DISPLAY TAX AMOUNT
// DISPLAY FINAL SALARY

#include<stdio.h>
int main()
{
    char ename[25];
    int wages,wdays,pay,fsalary;
    float tax;

    printf("Enter Employee name:");
    gets(ename);

    printf("Enter wages and working days:\n");
    scanf("%d %d",&wages,&wdays);

    pay=wages*wdays;
    tax=pay*0.20;
    fsalary=pay-tax;

    printf("\nTotal payment is:%d",pay);

    if (pay>=35000)
    {
        printf("\nTax amount is:%f",tax);
        printf("\nFinal salary is:%d",fsalary);
    }
    else
    {
        printf("\nTax amount is:0");
        printf("\nFinal salary is:%d",pay);
    }
    
    return 0;
}
// WAP TO READ RATE AND QUANTITY OF PRODUCT AND CALCULATE BILL AMOUNT
// IF BILL MORE THAN 20,000 THEN 30% DISCOUNT
// IF BILL MORE THAN 10,000 TO 19,999 THEN 20% DISCOUNT
// IF BILL MORE THAN 5,000 TO 9,999 THEN 10% DISCOUNT

#include<stdio.h>
int main()
{
    int rate,qty,bill;
    float disc;
    int fbill;

    printf("Enter rate and quantity of product:\n");
    scanf("%d %d",&rate,&qty);

    bill=rate*qty;
    
    if (bill>=20000)
    {
        disc=bill*0.30;
        fbill=bill-disc;
        printf("\nYour total bill amount is:%d",bill);
        printf("\nYour discount is:%f",disc);
        printf("\nYour final bill amount is:%d",fbill);
    }

    else if (bill>=10000)
    {
        disc=bill*0.20;
        fbill=bill-disc;
        printf("\nYour total bill amount is:%d",bill);
        printf("\nYour discount is:%f",disc);
        printf("\nYour final bill amount is:%d",fbill);
    }
    else if (bill>=5000)
    {
        disc=bill*0.10;
        fbill=bill-disc;
        printf("\nYour total bill amount is:%d",bill);
        printf("\nYour discount is:%f",disc);
        printf("\nYour final bill amount is:%d",fbill);
    }

    else
    {
        printf("\nYour total bill amount is:%d",bill);
        printf("\nYour discount is:0");
        printf("\nYour final bill amount is:%d",bill);
    }

    return 0;
}
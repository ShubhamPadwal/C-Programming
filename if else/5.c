// WAP TO READ PRODUCT NAME,RATE,QUANTITY AND CALCULATE THE BILL AMOUNT.
// IF BILL AMOUNT MORE THAN 10000 THEN 20% DISCOUNT.DISPLAY TOTAL BILL AMOUNT,DISCOUNT AND FINAL BILL AMOUNT.

#include<stdio.h>
int main()
{
    char pname[20];
    int rate,qty,tbill,fbill;
    float disc;

    printf("Enter product name:");
    // scanf("%s",&pname);
    gets(pname);// To read space For ex: pname is:White Shirt

    printf("Enter product rate:");
    scanf("%d",&rate);

    printf("Enter product quantity:");
    scanf("%d",&qty);

    tbill=rate*qty;
    disc=tbill*0.20;
    fbill=tbill-disc;

    printf("Total bill amount is:%d",tbill);

    if (tbill>=10000)
    {
        printf("\nDiscount is %f",disc);
        printf("\nFinal bill amount is:%d",fbill);        
    }
    else
    {
        printf("\nNo discount applicable");
        printf("\nFinal bill amount is %d",tbill);
    }
    
    return 0;
}
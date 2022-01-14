// WAP TO READ CUSTOMER NAME,PRODUCT NAME,RATE,QUANTITY AND CALCULATE TOTAL BILL AMOUNT

#include <stdio.h>
int main()
{
    char cname[20],pname[20];
    int rate,qty;
    int bill;

    printf("Enter customer name ");
    scanf("%s",&cname);

    printf("\nEnter product name ");
    scanf("%s",&pname);

    printf("\nEnter rate of product ");
    scanf("%d",&rate);

    printf("\nEnter quantity of product ");
    scanf("%d",&qty);

    bill=rate*qty;

    printf("\nThe bill amount of %s is %d",cname,bill);

    return 0;
}

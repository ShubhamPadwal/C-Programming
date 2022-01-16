// WAP TO READ MARKS OF PHYSICS,CHEMISTRY,MATH AND PRINT TOTAL MARK AND PRCENTAGE AND CHECK
//  STUDENT IS PASS OR FAIL(Passing marks per subject:40)

#include<stdio.h>
int main()
{
    int phy,chem,math;
    int tm;
    float per;

    printf("Enter Marks of Physics ");
    scanf("%d",&phy);
    
    printf("Enter Marks of Chemistry ");
    scanf("%d",&chem);
    
    printf("Enter Marks of Math ");
    scanf("%d",&math);

    tm=phy+chem+math;
    per=tm/3;

    printf("Total marks is: %d",tm);
    printf("\nPercentage is: %f",per);

    if(phy>=40 && chem>=40 && math>40)
    {
        printf("\nStudent is Pass");
    }
    else
    {
        printf("\nStudent is Fail");
    }

    return 0;
}
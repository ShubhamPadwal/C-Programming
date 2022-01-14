//WAP TO READ MARKS OF 5 SUBJECT (PHYSICS,CHEMISTRY,MATH,BIOLOGY,ENGLISH) AND PRINT TOTAL MARKS AND PERCENTAGE

#include <stdio.h>
int main()
{
    int phy,chem,math,bio,eng;
    int tm;
    float per;

    printf("Enter marks of physics ");
    scanf("%d",&phy);
    
    printf("\nEnter marks of chemistry ");
    scanf("%d",&chem);
    
    printf("\nEnter marks of mathematics ");
    scanf("%d",&math);
    
    printf("\nEnter marks of biology ");
    scanf("%d",&bio);

    printf("\nEnter marks of english ");
    scanf("%d",&eng);

    tm=phy+chem+math+bio+eng;
    per=tm/5;

    printf("\nTotal marks is: %d",tm);
    printf("\nPercentage is: %f",per);

    return 0;
}
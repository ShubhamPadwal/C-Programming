// WAP TO READ FLOOR NUMBER AND CHECK PIZZA SHOP AVAILABLE OR NOT AND CONSIDER PIZZA SHOP AVAILABLE AT 4TH AND 7TH FLOOR

#include<stdio.h>
int main()
{
    int fno;

    printf("Enter floor number:");
    scanf("%d",&fno);

    if(fno==4 || fno==7)
    {
        printf("Pizza shop available");
    }
    else
    {
        printf("Pizza shop not available");
    }

    return 0;
    
}
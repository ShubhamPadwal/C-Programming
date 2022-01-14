// WAP TO READ MATRIX OF SIZE 4*4 AND FIND LARGEST NUMBER AND THE SMALLEST NUMBER IN THAT MATRIX.

#include <stdio.h>
int main()
{
    int a[4][4];
    int i,j;
    int lar,small;

    printf("Enter The Matrix Of Size 4*4 : \n");

    for(i=0;    i<=3;  i++)
    {
        for(j=0;   j<=3;   j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    lar = a[0][0];
    small = a[0][0];

    printf("\nEntered Matrix Is : \n");

    for(i=0;  i<=3;  i++)
    {
        for(j=0;  j<=3;  j++)
        {
            printf(" %d",a[i][j]);

            if(lar<a[i][j])
            {
                lar = a[i][j];
            }

            if(small>a[i][j])
            {
                small = a[i][j];
            }
        }
        printf("\n");
    }
    printf("\nLargest Number Is :%d ",lar);
    printf("\nSmallest Number Is :%d ",small);

    return 0;
}


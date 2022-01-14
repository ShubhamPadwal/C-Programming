#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter The 10 Integer : ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
        printf(" %d",arr[i]);
    }
    for(i=0; i<=9; i = i+2)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}

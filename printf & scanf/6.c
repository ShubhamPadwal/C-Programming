// WAP TO READ THREE VALUES (a,b,c) AND CALCULATE SUM AND MEAN OF THEM

#include <stdio.h>
int main()
{
    int a,b,c;
    int s;
    float m;

    printf("Enter the value for a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    s=a+b+c;
    m=s/3;

    printf("Sum is: %d",s);
    printf("\nMean is: %f",m);

    return 0;
}
// WAP TO PRINT SUM AND MEAN OF GIVEN 4 NUMBER
// a=10,b=20,c=30,d=40

#include <stdio.h>
int main()
{
    int a=10,b=20,c=30,d=40;
    int s;
    float m;

    s=a+b+c+d;
    m=s/4;

    printf("Sum is: %d",s);
    printf("\nMean is: %f",m);

    return 0;
}
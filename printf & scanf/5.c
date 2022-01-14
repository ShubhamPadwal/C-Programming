// WAP TO READ VALUE FOR RADIUS AND CALCULATE AREA OF CIRCLE AND CIRCUMFERENCE OF CIRCLE

#include <stdio.h>
int main()
{
    int r;
    float a,c;

    printf("Enter the value for radius ");
    scanf("%d",&r);

    a=3.14*r*r;
    c=2*3.14*r;

    printf("\nArea of circle is %f",a);
    printf("\nCircumference of circle is %f",c);

    return 0;
}
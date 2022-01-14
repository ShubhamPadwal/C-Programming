// WAP TO READ LENGTH,BREADTH AND HEIGHT OF BOX AND CALCULATE THE VOLUME OF BOX

#include <stdio.h>
int main()
{
    int l,b,h;
    int v;

    printf("Enter the value of length,breadth and height ");
    scanf("%d %d %d",&l,&b,&h);

    v=l*b*h;

    printf("\nVolume of box is: %d",v);

    return 0;
}

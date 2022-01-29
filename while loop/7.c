// WAP TO TABLE OF 5

#include<stdio.h>
int main()
{
    int i=5;
    while (i<=50)
    {
        if(i%5==0)
        {
            printf("\n%d",i);
        }
        i++;
    }
    return 0;
}

/*__________OTHER WAY TO SOLVE__________*/

#include<stdio.h>
int main()
{
    int i=1;
    int x;

    while (i<=10)
    {
        x=i*5;
        printf("\n%d",x);
        i++;
    }
  return 0;
}
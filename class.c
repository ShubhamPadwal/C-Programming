//WAP to read 10 integer value and count total no. of other element excluding 3 and 5 from array list .
//1 2 3 4 5 3 5 6 5 3
# include <stdio.h>
int main()

{
	int a[10];
	int i,c=0;
    
    printf("enter 10 Integer value");
    
    for(i=0; i<=9; i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]!=3 && a[i]!=5)
    	{
    		c++;
		}
		
	}
	printf("\n The total no. of other elements  are : %d",c);
	return 0;
}


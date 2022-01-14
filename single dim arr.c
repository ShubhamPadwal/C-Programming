#include <stdio.h>
int main()
{
	int a[5];
	int i,g;

	
	printf("Enter the 5 integer value : ");
	
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	
	}
	
	g=a[0];
	
	for(i=0; i<=4; i++)
	{
		if(g<a[i])
		{
			g=a[i];
		}
	}
	
	printf("\n The largest number is : %d",g);
	
	return 0;
}

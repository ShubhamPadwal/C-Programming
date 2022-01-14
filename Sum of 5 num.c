//WAP to read 5 integer values and print sum of them
# include <stdio.h>
int main()
{
	int a[5];
	int i;
	int s=0;
	
	printf("Enter the 5 Integer value : ");
	
	for (i=0; i<=4; i++)
	{
		scanf("%d",& a[i]);
		s=s+a[i];
		
	}
	printf("\n The sum of all elements are :%d",s);
	
	return 0;
}

# include <stdio.h>
# include <conio.h>

int main()
{
	int n;
	int i,s=0;
	
	printf("How many elements want to store?");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the %d elements ",n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n Array Elements are : \n");
	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
		s=s+a[i];
		
	}
	printf("\n Sum of all numbers are %d",s);
	
	getch();
}

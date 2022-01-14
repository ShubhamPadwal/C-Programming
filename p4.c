//WAP TO READ MATRIX OF SIZE 3*3 AND PRINT THAT MATRIX AND ALSO PRINT TRANSPOSE OF MATRIX
#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	
	printf("Enter Matrix of size 3*3\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered Matrix is:\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[i][j]);
			
		} 
		printf("\n");
	}

	printf("\n Transpose of Matrix is:\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[j][i]);
			
		} 
		printf("\n");
	}
	
	return 0;
}

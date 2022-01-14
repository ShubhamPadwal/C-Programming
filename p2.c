//WAP TO READ MATRIX OF SIZE 4*4 AND FIND TOTAL EVEN AND ODD NUMBER IN THAT MATRIX
#include <stdio.h>
int main()
{
	int a[4][4];
	int i,j;
	int even=0,odd=0;
	
	printf("Enter Matrix of size 4*4 \n");
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Entered Matrix is: \n");
	
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf(" %d",a[i][j]);
			
			if(a[i][j]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
						
		}
		printf("\n");
	}
	printf("\n Total no. of even numbers in matrix: %d",even);
	printf("\n Total no. of odd numbers in matrix: %d",odd);
	
	return 0;	
}



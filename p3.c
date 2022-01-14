//WAP TO READ MATRIX OF SIZE 3*3 AND FIND TOTAL NUMBER OF 3 AND 7 ELEMENTS IN THAT MATRIX
#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	int three=0,sev=0;
	
	printf("Enter Matrix of size 3*3: \n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Entered matrix is: \n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",a[i][j]);
			
			if(a[i][j]==3)
			{
				three++;
			}
			
			if(a[i][j]==7)
			{
				sev++;
			}
		}
		printf("\n");
	}
	printf("\n Total number of 3 element in Matrix is: %d",three);
	
	printf("\n Total number of 7 element in Matrix is: %d",sev);
	
	return 0;
}

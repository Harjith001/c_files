#include <stdio.h>
// Matrix multiplication
int main()
{
	int i,j,k;
	int m,n;
	printf("Enter number of rows :");
	scanf("%d",&m);
	printf("Enter number of columns :");
	scanf("%d",&n);
	//Declaring the matrixes 
	int a[m][n],b[m][n], mult[m][n];
	printf("Enter Matrix 1 : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	printf("Enter Matrix 2 : \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\n",&b[i][j]);
		}
	}
	//multiplication of matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			mult[i][j] = 0;
			for(k=0;k<n;k++)
			{
				mult[i][j]= mult[i][j]+(a[i][k]*b[k][j]); 
			}
		}
	}
	//printing mult
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mult[i][j]); 
		}
		printf("\n");
	}
	return 0;
}
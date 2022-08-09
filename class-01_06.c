#include <stdio.h>
int main()
{
	int m=3,n=4;
	int matrix[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	printf("\nMatrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Index (%d,%d): %d\t",i,j,matrix[i][j]);
		} 
		printf("\n");
	}
	printf("\nBase address (matrix):%ld\n",matrix);
	//all four gives the base address
	printf("Base address (matrix[0]):%ld\n",matrix[0]); 
	printf("Base address (&matrix):%ld\n",&matrix);
	//Below address will not point to value but print address
	printf("Base address (*matrix+0):%ld\n",*(matrix+0));
	printf("\nObservation - Each address is incremented by 4 since c follows row major format\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//each address is incremented by 4
			printf("matrix[%d][%d] Address: %ld Value: %d\n",i,j,&matrix[i][j],matrix[i][j]); 
		}
	}
	// printing address of first elements of the row
	printf("\n\nAddress of initial row address :\n");
	for(i=0;i<m;i++)
	{
		printf("Adress of row %d :%ld\n",i,matrix[i]);
		printf("Adress of row %d :%ld\n",i,*(matrix+i));
		//size = 4*4 = 16 it prints the row size as 4 elements in a row and 4 is size of int
		printf("Adress of row %d :%ld\n",i,sizeof(matrix[i]));
	}
	printf("\nUsing double pointers to print the value :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//Values are printed
			printf("matrix[%d][%d] Address: %ld Value: %d\n",i,j,*(matrix[i]+j),matrix[i][j]);
			printf("matrix[%d][%d] Address: %ld Value: %d\n",i,j,*(*(matrix+i)+j),matrix[i][j]);
			//Prints the address
			printf("matrix[%d][%d] Address: %ld Value: %d\n",i,j,matrix[i]+j,matrix[i][j]);
		}
	}
	return 0;
}

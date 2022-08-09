#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	printf("Enter range of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// Bubble Sort 
	int j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			int temp =0 ;
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int index;
	printf("Enter number to find closest of :");
	scanf("%d\n",&n);
	int close=100000;
	for(i=0;i<n;i++)
	{
		int diff= abs(n-a[i]);
		if(diff < close)
		{
			index=i;
			close = diff;
		}
	}
	printf("Closest element = %d \n",a[index]);
	printf("Difference = %d",close);
}
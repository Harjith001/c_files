#include <stdio.h> 
int main()
{
	int n;
	printf("Enter size of the array");
	scanf("%d", &n);
	int a[n];
	int i;
	printf("Enter the array : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max=0;
	int* p = a;
	for (i = 0; i < n; i++)
	{
		if(max < *(p+i))
			max = *(p+i);
	}
	printf("Max value = %d", max);
	return 0;
}
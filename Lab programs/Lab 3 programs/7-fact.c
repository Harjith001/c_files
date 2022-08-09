#include <stdio.h>
int main()
{
	int f=1;
	int i;
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		f=f+(f*i);
	}
	printf("Factorial = %d",f);
	return 0;
}
#include <stdio.h>
int lead(int n);
int main()
{
	int num;
	printf("Enter your number: ");
	scanf("%d",&num);
	printf("%d",lead(num));
	return 0;
}
int lead(int n)
{
	while(n>=10)
	{
		n=n/10;
	}
	return n;
}
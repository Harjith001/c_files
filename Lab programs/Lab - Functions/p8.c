#include <stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("Enter your number :");
	scanf("%d", &n);
	printf("Sum = %d",sum(n));
	return 0;
}
int sum(int n)
{
	if(n<=0)
		return 0;
	else
		return (n%10)+sum(n/10);
}
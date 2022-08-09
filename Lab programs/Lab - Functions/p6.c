#include <stdio.h>
int fact(int x);
int main()
{
	int num;
	printf("Enter your number :");
	scanf("%d", &num);
	printf("Factorial :%d",fact(num));
	return 0;
}
int fact(int x)
{
	if(x==1)
		return 1;
	else
		return x*fact(x-1);
}
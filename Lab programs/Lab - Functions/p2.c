#include <stdio.h>
bool check(int num);
int main()
{
	int num;
	printf("Enter your number :");
	scanf("%d", &num);
	if(check(num)==true)
		printf("Number is even");
	else
		printf("Number is odd");
	return 0;
}
bool check(int n)
{
	if((n%2)==0)
		return true;
	else
		return false;
}
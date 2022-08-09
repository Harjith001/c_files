#include <stdio.h>
int main()
{
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	int x=n;
	int s=0;
	while(n>0)
	{
       s=(s*10)+(n%10);
       n=n/10;
	}
	if(s==x)
	{
		printf("palindrome");
	}
	else
		printf("not a palindrome");
	return 0;
}
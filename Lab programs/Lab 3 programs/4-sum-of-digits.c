#include <stdio.h>
int main()
{
	int s=0,n;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n>0)
	{
		s=(n%10)+s;
		n=n/10;
	}
	printf("sum=%d",s);	
	return 0;
}
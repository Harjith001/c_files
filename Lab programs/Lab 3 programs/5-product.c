#include <stdio.h>
int main()
{
	int s=1,n;
	printf("Enter your number:");
	scanf("%d",&n);
	while(n>0)
	{
		s=(n%10)*s;
		n=n/10;
	}
	printf("Product=%d",s);	
	return 0;
}
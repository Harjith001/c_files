#include <stdio.h>
int main()
{
	int n,f=0;
	printf("Enter your number : ");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
			f++;
	}
	if(f==1)
		printf("Prime number");
	else
		printf("Not a Prime number");
	return 0;
}
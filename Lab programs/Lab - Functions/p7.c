#include <stdio.h>
int natural(int n);
int main()
{
	int x;
	printf("Enter your limit :");
	scanf("%d",&x);
	printf("Sum : %d",natural(x));
	return 0;
}
int natural(int n)
{
	if(n==0)
		return 0;
	else
		return n+natural(n-1);
}
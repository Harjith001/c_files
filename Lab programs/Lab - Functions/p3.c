#include <stdio.h>
int max(int x,int y,int z);
int min(int x,int y,int z);
int main()
{
	int a,b,c;
	printf("Enter Number 1 :");
	scanf("%d",&a);
	printf("Enter Number 2 :");
	scanf("%d",&b);
	printf("Enter Number 3 :");
	scanf("%d",&c);
	printf("Max number : %d\n",max(a,b,c));
	printf("Min number : %d",min(a,b,c));
	return 0;
}
int max(int x,int y,int z)
{
	if(x>y && x>z)
		return x;
	if(y>x && y>z)
		return y;
	if(z>x && z>y)
		return z;
}
int min(int x, int y,int z)
{
	if(x<y&&x<z)
		return x;
	if(y<x&&y<z)
		return y;
	if(z<x&&z<y)
		return z;
}
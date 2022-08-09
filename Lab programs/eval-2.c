#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("Enter value for a:");
	scanf("%d",&a);
	printf("Enter value for b:");
	scanf("%d",&b);
	printf("Enter value for c:");
	scanf("%d",&c);
	float d;
	d=sqrt((b*b)-(4*a*c));
	float x1=(-b+d)/(2*a);
	float x2=(-b-d)/(2*a);
	printf("x1 : %0.2f \n",x1);
	printf("x2 : %0.2f",x2);
	return 0;
}
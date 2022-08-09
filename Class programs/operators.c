#include <stdio.h>
int main()
{
	//Operators - unary and binary
	int a=9;
	a+=7; // unary operator - needs only one element
	printf("%d",a);
	int b=15;
	if(a>b) // binary operator - needs two elements
		printf("\nTrue");
	else
		printf("\nFalse");
	//Difference between prefix and postfix
	int c=(a++ + b); // a gets incremented after the statement is executed
	printf("\nPostfix c = %d",c);
	c=(++a + b); // a gets increment before the statement is executed
	printf("\nPrefix c = %d",c);
	//ternary operator example
	if(a) // since a has some value
		printf("\nPrints");
	if(a=10)
		printf("This also prints");
	int x=0;
	int z = ++x + ++x;
	printf("\n%d",z);
	x=0;
	z=++x + x++;
	printf("\n%d",z);
	return 0;
}
#include <stdio.h>
int main()
{
	int a;
	unsigned int b;
	long int c;
	short int d;
	char e; //default is signed
	unsigned char f;
	float g;
	double h;
	long double i;
	printf("Sizes displayed are in Bytes \n");
	printf("Integer size - %lu ",sizeof(a)); //%lu - unsigned long return type of sizeof() function
	printf("\nUnsigned Integer size - %lu",sizeof(b));
	printf("\nLong Integer size - %lu",sizeof(c));
	printf("\nShort Integer size - %lu",sizeof(d));
	printf("\nChar size - %lu",sizeof(e));
	printf("\nUnsigned Char size - %lu",sizeof(f));
	printf("\nFloat size - %lu",sizeof(g));
	printf("\nDouble size - %lu",sizeof(h));
	printf("\nLong Double size - %lu",sizeof(i));
	printf("\n"); //if you give an random escape sequence like \c it shows error
	int x=5;
	int y=50; 
	printf("%3d %6d",x,y); // %3d means it leaves 3 spaces before printing
	printf("\n%d",x);
	return 0;
}
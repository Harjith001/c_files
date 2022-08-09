#include <stdio.h>
int main()
{
	int a; /* signed,unsigned,short and long(long long is also there) version available (each has different memory) */ 
	char b; // single byte of memory of char, signed(default) and unsigned version available
   float c;
   double d; // long double also available
	unsigned char x; // minus sign can't be included for unsigned
	/* c does not support String variable */
	// All data types 
	printf("Enter an integer variable \n");
	scanf("%d",&a);  // integer ,%d is format specifier
	printf("Enter a character variable \n");
	scanf("%c",&b);  // char 
	printf("Enter a float variable \n");
	scanf("%f",&c);  // float
	printf("Enter a double variable \n");
	scanf("%lf",&d); // double
	printf("All values are successfully inputted \n");
	return 0;
}
/* Signed char means out of 8 bits, 1 bit will be allocated to sign + or -
   For char variable
   Range of signed - -128 to 127
   Range of unsigned - 0 to 255
   Byte allocation differs for each and every compiler*/
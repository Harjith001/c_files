#include <stdio.h>
int main()
{
	unsigned int a=-27;
	printf("%u",a); /*unknown number(Garbage value) is printed eventhough it's logically incorrect 
	                  It's  a logical error */
	short int b=35000; // It exceeds the range
    printf("\n%d",b); // It displays a negative signed garbage value
    int c=67;
    printf("\n%c",c); // It converts int to char (depending upon ASCII values)
	int d=98;
	printf("\n%f",d); //Displays 0.000000
	int e=5;
	printf("\n e=%d",e);
	printf("\n e=%5d",e); // 5 means the space left it prints e after 5 spaces
	printf("\n e=%-5d",e);// negative number can also be used
	float f=233.456;
	printf("\n f=%f",f); //Displays till 6 digits
	printf("\n f=%.2f",f); // .2 means after decimal only two digits be displayed(by rounding off)
	printf("\n f=%2.2f",f);
	float g=9.8765432;
	printf("\n f=%f",g); //It prints till 6 digits only even if the float has more than it
	double h=90.8;
	printf("\n h=%lf",h); 
	return 0;
}
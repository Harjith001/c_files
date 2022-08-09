#include <stdio.h>
int main(void) 
{	
	float *pc,c;
	c=5.0; 
	pc=&c; //assigns address of c to pointer pc

    //%p is the access specifier for pointers 
	printf("%p \n", pc); // address of c variable
	printf("%f \n", *pc); // value stored in address inside pc
	printf("%p \n",&pc); // address of pc variable
	printf("%f \n",*pc=(*pc)+1); // adds 1 to value of c as * points to the address
	printf("%f \n",c); //value of c is printed

	return 0;
}

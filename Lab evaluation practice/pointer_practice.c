#include <stdio.h>
int main()
{
	int a=10;
	int* ptr=&a;
	printf("ptr = %ld \n",ptr);
	printf("*ptr++ = %ld \n",(*ptr++));
	printf("++*ptr = %ld \n",(++*ptr));
	return 0;
}
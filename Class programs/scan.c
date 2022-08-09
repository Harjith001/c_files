#include <stdio.h>
int main()
{
	int a;
	printf("Enter the value to be displayed \n");
	scanf("%d",&a); // use & to store value in address of a
	printf("Number entered: %d",a);
	return 0;
}
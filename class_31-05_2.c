#include <stdio.h>
int* small(int* px,int* py); // small is returning a pointer and accepts two addresses as parameters
int main()
{
	int x,y;
	printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	int* p;
	p=small(&x,&y);
	printf("Smaller value = %d\n",*p);
	printf("Address of smaller value: %p",p);
	return 0;
}
int* small(int* px,int* py)
{
	return (*px < *py?px:py); //*px - points to the value of address stored in px whereas px has just address of a
}
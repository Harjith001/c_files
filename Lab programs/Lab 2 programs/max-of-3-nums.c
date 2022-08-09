#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter number 1\n");
	scanf("%d",&num1);
	printf("Enter number 2\n");
	scanf("%d",&num2);
	printf("Enter number 3\n");
	scanf("%d",&num3);
	if(num1>num2 && num1>num3)
		printf("Number 1 is greatest of three");
	if(num2>num1 && num2>num3)
		printf("Number 2 is greatest of three");
	if(num3>num2 && num3>num1)
		printf("Number 3 is greatest of three");
	return 0;
}
#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
int main()
{
	int x,y;
	printf("Enter number 1 : ");
	scanf("%d",&x);
	printf("Enter number 2 : ");
	scanf("%d",&y);
	printf("Select the preferred operator\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for Division\n");
	int c;
	scanf("%d",&c);
	switch (c)
	{
		default:
		printf("Enter a valid choice");
		break;
		case 1:
		printf("Addition :%d",add(x,y));
		break;
		case 2:
		printf("Subtraction :%d",sub(x,y));
		break;
		case 3:
		printf("Multiplication :%d",mult(x,y));
		break;
		case 4:
		printf("Division :%d",div(x,y));
		break;
	}
	return 0;
}
int add(int a,int b)
{
	return (a+b);
}
int sub(int a,int b)
{
	return (a-b);
}
int mult(int a,int b)
{
	return(a*b);
}
int div(int a,int b)
{
	return(a*b);
}

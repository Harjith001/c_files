#include <stdio.h>
int main()
{
	int c;
	printf("Enter 1 for addition \n Enter 2 for Subraction \n Enter 3 for Multiplication \n Enter 4 for Division\n");
	scanf("%d",&c);
	float result;
	float a,b;
	printf("Enter first number:\n");
	scanf("%f",&a);
    printf("Enter second number:\n");
    scanf("%f",&b);
	switch (c)
    {
    	case 1:
    	result =a+b;
    	printf("Result = %0.2f",result);
    	break;
    	case 2:
    	result =a-b;
    	printf("Result = %0.2f",result);
    	break;
    	case 3:
    	result =a*b;
    	printf("Result = %0.2f",result);
    	break;
    	case 4:
    	result =a/b;
    	printf("Result = %0.2f",result);
    	break;
    	  }
	return 0;
}
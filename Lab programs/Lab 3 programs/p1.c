#include <stdio.h>
int main()
{
	int a=1;
	//loop in do while statement
	do
	{ 
       printf("%d execution \n",a);
       a=a+1;
	}while(a<3);
    a=1;
	//Same loop in while format
	while(a<3)
	{
		printf("%d execution \n",a);
		a=a+1;
	}
	//Same loop in for format
	for(a=1;a<3;a++)
	{
		printf("%d execution \n",a);
	}
	//n natural numbers in reverse order
	int n;
	printf("Enter n value \n");
	scanf("%d",&n);
	while(n>0)
	{
		printf("%d\n",n);
		n--;
	}

	int i=0;
	//these depends on compiler
    for(i<3;i++;) // not printing, throws error if two semicolon is not used
    {
    	printf("i=%d\n",i);
    } 
    for(i=0;i++;) // not printing
    {
    	printf("i=%d\n",i);
    }
    for(i=0;i<3;) // infinite loop - prints endlessly
    {
    	printf("i=%d\n",i);
    }
    //multiple initialization
    int j;
    for(i=0,j=0;i<5&&j<5;i++,j++) // prints both values of i,j and works without errors
    {
    	printf("i=%d \nj=%d\n",i,j);
    }
    //Nested for loop
    for(i=1;i<=5;i++) //prints a pattern
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("%d",j);
    	}
    	printf("\n");
    }
	return 0;
}
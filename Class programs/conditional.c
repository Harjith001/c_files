#include <stdio.h>
int main()
{
	int age; // variable to be inputted
	printf("Enter age \n");  
	scanf("%d",&age);
	if(age>=18) // simple if statement to check whether user is eligible to vote 
	{
		printf("You are eligible to vote");
	}
	else
	{
		printf("You are not eligible to vote yet");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	char c[100]; //string to be inputted
	printf("Enter your string :");
	fgets(c,sizeof(c),stdin); //using fgets() to input string
	int i=0;
	printf("Reversed String:");
	//finding length
	int len=0; //length of the inputted string
	while(c[i]!='\0') //finding without using strlen() function
	{
		len++;
		i++;
	}
	for (i = (len-1); i >=0;i--) //directly printing the reverse of the string by treversing in reverse
	{
		printf("%c",c[i]);
	}
	return 0;
}
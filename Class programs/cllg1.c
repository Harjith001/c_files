//Question 1 - Accept sequence of  strings  form the user and search for a particular strinng form array of  space n without string functions
#include <stdio.h>
#include <string.h>
int main()
{
	char str[10][10];
	int i;
    for (i = 0; i < 10; i++)
    {
    	printf("Enter String %d : ",(i+1));
    	scanf("%s",str[i]);
    }
    char c[10];
    printf("Enter the string the be found :");
    scanf("%s",c);
    int flag=0;
    for (i = 0;i<10;i++)
    {
    	if(strcmp(c,str[i]))
    	{
    		printf("Found");
    		flag++;
    		break;
    	}
    }	
    if(flag==0)
    {
    	printf("Not found");
    }
    return 0;
}
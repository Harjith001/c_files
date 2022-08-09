//Question 1 - Accept sequence of  strings  form the user and search for a particular strinng form array of  space n without string functions
#include <stdio.h>
#include <string.h>
int length(char x[10]);
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
    	int len=length(str[i]);
        printf("len=%d",len);
        int a=0;
        int b=0;
        for(int j = 0; j < len; j++)
        {
            a=a+(int)(c[j]);
            b=b+(int)(str[i][j]);
        }
        printf("a=%d",a);
        printf("b=%d",b);
        if(a==b)
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
int length(char *x)
{
    int i,length=0;
    for(i=0; *x='\0'; i++)
    {
        x++;
        length++; 
    }
    return length;
}
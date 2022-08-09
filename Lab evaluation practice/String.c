#include <stdio.h>
#include <string.h>
//global variables
int a[2][2],b[2][2];
void check(char x[],int n);
void sum();
void substring(char a[],char b[]);
void bubblesort(int s[]);
int main()
{
	char c[10];
	printf("Enter your string:");
	fgets(c,10,stdin); //It is prefered more than gets() as gets() does not have upper limit of array
	printf("Index of 2 : %c\n",c[2]); 

	//String Functions 
	printf("Length function : %d\n",strlen(c));
	printf("Size of string : %ld\n",sizeof(c));

	char x[10];
	printf("Enter another charater to concatenate : ");
	gets(x);
	printf("\nConcatenation of two strings : %s",strcat(c,x));

	if(strcmp(c,x)==1) // Both are  equal then it returns 1
		printf("Both are equal\n");

	printf("\nReverse : %s",strrev(x));

	printf("\n Lower Case : %s",strlwr(x));

	check(x,10);
	sum();
	char p[10],q[10];
	printf("Enter string 1 :");
	scanf("%s",p);
	printf("\nEnter string 2 :");
	scanf("%s",q);
	substring(p,q);
	return 0;

	//passing a array to a function 
}
void check(char x[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(x[i]=='H'||x[i]=='h')
			printf("\nYes,H is present in string");
	}
}
void sum()
{
	int i,j;
	int sum[2][2];
	printf("\nEnter matrix 1:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter matrix 2:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Matrix sum -\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
void substring(char p[],char q[])
{
	//q is the substring
	int i,count=0;
	for(i=0;i<10;i++)
	{
		char m=p[i];
		if(m==q[count])
		{
			count++;
			continue;
		}
		else
		{
			if(count>0)
			{
				count=0;
				continue;
			}
		}
	}
	printf("count = %d",count);
	printf("\nlenght of q=%d",strlen(q));
	if(count == (strlen(q)+1))
		printf("Substring is present");
}
void bubblesort(int s[])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			int temp=0;
			if(s[j]>s[j+1])
			{
				temp=s[j+1];
				s[j+1]=s[j];
				s[j]=temp;
			}
		}
	}
}
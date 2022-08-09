#include <stdio.h>
void print(int a[6],int len);
int main()
{
	int a[6]={10,20,30,40,50,60};
	print1(a,6);
	printf("Printing after adding 1 to all elements using pointers\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
void print(int *a,int len)
{
	for(int i=0;i<6;i++)
	{
		printf("%d\n",*(a+i)); //one way to access
		printf("%d\n",a[i]);
		*(a+i)+=1; //Adding one here will be reflected in th main function as using pointers to increment
		a[i]+=1; //This also works, these work only if the array is passed
	}
}
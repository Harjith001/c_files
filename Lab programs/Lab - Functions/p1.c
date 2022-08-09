#include <stdio.h>
int square(int num);
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    printf("Square = %d",square(num));
	return 0;
}
int square(int num)
{
	return(num*num);
}

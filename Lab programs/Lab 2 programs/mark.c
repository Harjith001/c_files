#include <stdio.h>
int main()
{
	int mark;
	printf("Enter your marks\n");
	scanf("%d",&mark);
	if(mark>90)
		printf("Grade - A");
	if(mark>75 && mark<=90)
		printf("Grade - B");
	if(mark>65 && mark<=75)
		printf("Grade - C");
	return 0;
}
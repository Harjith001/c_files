#include <stdio.h>
struct roll{
	int roll_no[10];
};
void read(struct roll *r);
void display(struct roll *f);
void avg(struct roll *z);
int main()
{
	struct roll x;
	struct roll *p=&roll;
	read(*x);
	return 0;
}
void read(struct roll r)
{
	printf("Enter 10 roll numbers\n");
	for (int i = 0; i <10;i++)
	{
		scanf("%d", &((r+i)->roll_no[i]));
	}
	display(r);
}
void display(struct roll f)
{
	printf("\nEntered roll numbers\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", ((f+i)->roll_no[i]));
	}
	avg(f);
}
void avg(struct roll z)
{
	int a=0;
	for (int i = 0; i < 10; i++)
	{
		a=a+((z+i).roll_no[i]);
	}
	printf("Average = %d",(a/10));
}
// difference between two time periods
#include <stdio.h>
#include <math.h>
typedef struct time{
	int hh;
	int mm;
}t;
int main()
{
	t t1,t2;
	printf("Enter time 1 :\n");
	printf("Enter hh :");
	scanf("%d", &t1.hh);
	printf("Enter mins :");
	scanf("%d", &t1.mm);

	printf("Enter time 2:\n");
	printf("Enter hh :");
	scanf("%d", &t2.hh);
	printf("Enter mins :");
	scanf("%d", &t2.mm);

	int h,m;
	h = abs(t1.hh - t2.hh);
	m = t1.mm - t2.mm;

	printf("Time difference\n");
	printf("HH = %d\n",h);
	printf("m = %d",m);


	return 0;
}
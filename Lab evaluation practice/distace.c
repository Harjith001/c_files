#include  <stdio.h>
typedef struct distance{
	int  feet;
	int  inch;
}d;
int main()
{
	d d1;
	d d2;
	printf("Enter distance 1:\nfeet:");
	scanf("%d",&d1.feet);
	printf("inch:");
	scanf("%d",&d1.inch);
	printf("Enter distance 2:\nfeet:");
	scanf("%d",&d2.feet);
	printf("inch:");
	scanf("%d",&d2.inch);

	int final_feet,final_inch;
	final_feet = d1.feet+d2.feet;
	final_inch = d1.inch+d2.inch;

	if(final_inch>=12){
		final_feet = final_feet + (final_inch % 12);
		final_inch = (final_inch/12);
	}
	printf("distance after addition \n");
	printf("feet - %d\n",final_feet);
	printf("inch - %d",final_inch);
	return 0;
}
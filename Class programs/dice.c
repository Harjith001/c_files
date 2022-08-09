#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[6]={0,0,0,0,0,0};
	int i;
	for(i=1;i<=6000000;i++)
	{
		long int x=(rand()%6);
		switch(x)
		{
		case 0:
		a[0]++;
		break;
		case 1:
		a[1]++;
		break;
		case 2:
		a[2]++;
		break;
		case 3:
		a[3]++;
		break;
		case 4:
		a[4]++;
		break;
		case 5:
		a[5]++;
		break;
	}
	}
	printf("1 = %d \n",a[0]);
	printf("2 = %d \n",a[1]);
	printf("3 = %d \n",a[2]);
	printf("4 = %d \n",a[3]);
	printf("5 = %d \n",a[4]);
	printf("6 = %d \n",a[5]);
	printf("Sum = %d",(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]));
	return 0;
}
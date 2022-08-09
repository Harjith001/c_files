#include <stdio.h>
int main()
{
	int s;
	float hra,da;
	printf("Enter your Basic Salary\n");
	scanf("%d", &s);
	if(s<=10000 && s>0)
    {
    	hra=s*(20.0/100.0);
    	da=s*(80.0/100.0);
    }
    if(s>10000 && s<=20000)
    {
    	hra=s*(25.0/100.0);
    	da=s*(90.0/100.0);
    }
    if(s>20000)
    {
    	hra=s*(30.0/100.0);
    	da=s*(95.0/100.0);
    }
    float gross = s+hra+da;
    printf("gross: %.2f",gross);
	return 0;
}
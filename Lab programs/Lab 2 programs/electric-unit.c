#include <stdio.h>
int main()
{
	int u;
	float amt;
	printf("Enter your units used :\n");
	scanf("%d", &u);
	if(u<=50)
		amt=u*0.50;
	if(u>50 && u<=100)
		amt= 25.0 + ((u-50)*0.75);
	if(u>100 && u<=200)
		amt = 25.0 + 37.5 + ((u-100)*1.2);
	if(u>200)
		amt = 25.0 + 37.5 + 120.0 + ((u-200)*1.5);
	float surcharge=amt*(20.0/100.0);
	printf("Amount     :\t %.2f\n",amt);
	printf("Surcharge  :\t %.2f\n",surcharge);
	printf("Total Bill :\t %.2f\n",(amt+surcharge));
	return 0;
}
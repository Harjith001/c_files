#include <stdio.h>
int main()
{
	int n;
	printf("Enter number of cities:\n");
	scanf("%d", &n);
	int p[2][n];
	int i;
	printf("Enter gold rates for previous day:\n"); //getting gold values for previous day
	for (i=0; i<n; i++)
	{
		scanf("%d", &p[0][i]);
	}
	printf("Enter gold rates for today:\n"); //getting gold values for today
	for (i=0; i<n;i++)
	{
		scanf("%d", &p[1][i]);
	}
	int min=p[1][0]; //min value of today's gold price
	int index=0; //index to indicate city 
	for (i=1; i<n; i++)
	{
		if(p[1][i]<min)
		{
			min=p[1][i];
			index=i;
		}
	}
	printf("Lowest gold rate today:%d \nCity with lowest gold price:%d\n",min,index);
	int max=0; //maximum value of gold price today
	for (i=0; i<n; i++)
	{
	     if(max<p[1][i])
	     	max=p[1][i];
	}
	printf("Maximum difference=%d\n",(max-min)); //max - min of today's gold price
	printf("Prediction for next day :\n");
	for (i=0; i<n; i++)
	{
		int diff;
		diff=p[1][i]-p[0][i];  //finds diff between today's and yesterday's gold price
		printf("City index:%d\n",i);
		printf("Prediction for next day :%d\n",(p[1][i]+diff)); //adds the diff for prediction value
	}
	//returns 0
	return 0;
}
#include <stdio.h>
int main()
{
	int m[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,k=0,p,a=0;
	int dd,mm,yy,x;
	printf("Welcome to Library Management System\n");
	printf("Enter today's date\n");
	printf("DD : ");
	scanf("%d",&dd);
	printf("MM : ");
	scanf("%d",&mm);
	printf("YY : ");
	scanf("%d",&yy);
    printf("\n\n Due days :");
    scanf("%d",&x);
	for(i=0;i<mm;i++)
		k=k+m[i];
	k=k+dd+x;

	if(k<=365)
	{
		for(i=0;i<13;i++)
		{
			p=k-m[i];
			if(p<=m[i+1])
			{
				a=i+1;
				break;
			}
			else
				k=p;
		}
		printf("Due Date : %d:%d:%d",p,a,yy);
	}
	else
	{
		k=k-365;
		for(i=0;i<13;i++)
		{
			p=k-m[i];
			if(p<=m[i+1])
			{
				a=i+1;
				break;
			}
			else
				k=p;
		}
		printf("Due Date : %d:%d:%d",p,a,yy+1);
	}

	return 0;
}
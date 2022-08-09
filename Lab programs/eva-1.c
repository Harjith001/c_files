#include <stdio.h>
int main()
{
	int a[3];
	int b[3];
	int c[3];
	int i;
	for(i=0;i<3;i++)
	{
      printf("Enter input for plane %d\n",(i+1));
      printf("Enter hh : ");
      scanf("%d",&a[i]);
      printf("Enter mm : ");
      scanf("%d",&b[i]);
      printf("Enter landing time : ");
      scanf("%d",&c[i]);
	}
	int n[3];
    int min,max,mid,min_index,max_index;    
    n[0]=a[0]+b[0];
    n[1]=a[1]+b[1];
    n[2]=a[2]+b[2];
    if(n[0] < n[1] && n[0] < n[2])
	{
		min=n[0];
		min_index=0;
	}
	else if(n[1]<n[2])
	{
		min=n[1];
		min_index=1;
	}
	else
	{
		min=n[2];
		min_index=2;
	}	
	if(n[0] > n[1] && n[0] > n[2])
	{
		max=n[0];
		max_index=0;
	}
	else if(n[1]>n[2])
	{
		max=n[1];
		max_index=1;
	}
	else
	{
		max=n[2];
		max_index=2;
	}	
    int mid_index;
    if(0!=min_index && 0!=max_index)
    {
    	mid=n[0];
    	mid_index=0;
    }
    if(1!=min_index && 1!=max_index)
    {
    	mid=n[1]+c[1];
    	mid_index=1;
    }
    if(2!=min_index && 2!=max_index)
    {
    	mid=n[2]+c[2];
    	mid_index=2;
    }

    if((min+c[min_index])<mid && (mid+c[min_index])<max)
    	printf("Safe to land");
    else
        printf("Not Safe to land");
	return 0;
}
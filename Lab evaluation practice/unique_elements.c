#include <stdio.h>
int main()
{
    int n=8;
    int i;
    int a[8];
    for(i=0;i<n;i++)
    {
    	printf("Enter %d element of the array:",(i+1));
    	scanf("%d",&a[i]);
    }	
    //Find the unique elements of the array
    int j,k;
    for(i=0;i<n;i++)
    {
    	int x=a[i];
    	for(j=i+1;j<n;j++)
    	{
    		if(x==a[j])
    		{
    			for(k=j;k<n-1;k++)
    			{
    				a[k]=a[k+1];
    			}
    			n--;
    		}
    		else
    			continue;
    	}
    }
    // printing the array after deleting repeating elements
    printf("Array after deleting repeating elements");
    for(i=0;i<n;i++)
    {
    	printf("%d,",a[i]);
    }
	return 0;
}
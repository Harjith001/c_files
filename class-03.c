#include <stdio.h>
int main()
{
	//Using multiple pointers
	int a=20;
	int* p= &a;
	int** p1 = &p;
	int*** p2 = &p1;
	printf("Value of a = %d\n", ***p2);
	printf("Address of p1 = %ld\n",p2 );
	printf("Address of p = %ld\n",**p2); 

	//Void pointer
	int x=5;
	float y=5.5;
	void* ptr; //void pointer
	ptr = &x; //now the pointer points to an integer
	printf("Int value = %d\n",*(int*)ptr); //in case of void pointer use typecasting, convert to int pointer do int*
	
	/*
	Typecasting - 
	float a = 5.5;
	int b;
	b= (int)a; Here a will be converted to an int type
	*/ 

	ptr =&y;
	printf("Float value = %f\n",*(float*)ptr);
	
	//Array of pointers
	/*
	int* x[3]; //x - array of pointer
	int r=10;
	int s=20;
	int t=30;
	x[0] = &r;
	x[1] = &s;
	x[2] = &t;
	printf("Value of r=%d\n",*x[0]);
	printf("Value of s=%d\n",*x[1]); 
	printf("Value of t=%d\n",*x[2]);
	return 0;
	*/

}
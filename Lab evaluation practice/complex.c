#include  <stdio.h>
typedef struct complex{
	int  real;
	int  imaginary;
}c;
int main()
{
	c c1;
	c c2;
	printf("Enter Complex number 1:\nReal part:");
	scanf("%d",&c1.real);
	printf("imaginary part:");
	scanf("%d",&c1.imaginary);
	printf("Enter Complex number 2:\nReal part:");
	scanf("%d",&c2.real);
	printf("Imaginary part:");
	scanf("%d",&c2.imaginary);

	int final_real,final_imaginary;
	final_real = c1.real+c2.real;
	final_imaginary = c1.imaginary+c2.imaginary;

	printf("Complex after addition \n");
	printf("%d + %di",final_real,final_imaginary);
	return 0;
}
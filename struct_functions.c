#include <stdio.h>
struct id{
    char name[20];
    int id;	
};
void display1(struct id i);
void display2(char x[],int y);
void display3(struct id *p);
int main()
{
	struct id sid;
	struct id *p = &sid;
	printf("Enter name of the person = ");
	scanf("%s",sid.name);
	printf("Enter id of the person = ");
	scanf("%d",&sid.id);

	display1(sid);
	display2(sid.name,sid.id);
	display3(p);
	return 0;
}
void display1(struct id i) //passing the entire structure
{
	printf("\n\nPassed the entire structure\n");
	printf("Name entered = %s",i.name);
	printf("\nId entered = %d\n",i.id);
}
void display2(char x[],int y) //passing only structure elements one by one
{
	printf("\n\nPassed element by element\n");
	printf("Name entered = %s",x);
	printf("\nId entered = %d\n",y);
}
void display3(struct id *p)
{
	printf("\n\nPassed usinig pointer\n");
	printf("Name entered = %s",p->name);
	printf("\nId entered = %d\n",(p+1)->id);
}
#include <stdio.h>
#include <stdlib.h>
struct book{
	char name[20];
	int page;
	float price;
};
int main()
{
	struct book *bptr;
	//method 1 - dynamic memory allocation
	//using malloc() -  available in stdlib.h
	// ptr = (castType*)malloc(size) 
	//here since pointer type is struct book so tyoe cast to it
	//using the below step allocates memory for struct pointer
	bptr = (struct book*)malloc(sizeof(struct book)); 
	scanf("%s", &bptr->name);
	printf("Name - %s\n",bptr->name); //no output since it it not storing in the variable
	//method 2
	struct book b[5],*p;
	p=&b[0];
	//using array of structure variables
	int i;
	for(i=0;i<5;i++)
	{
	 scanf("%s",(p+i)->name);
	 printf("Name = %s\n",((p+i)->name));
    }
    printf("Using pointer as loop variable\n");
    //instead of using i,we are using the pointer variable itself as loop variable
    for(p=b;p<(b+5);p++)
    {
     scanf("%s",&p->name);
	 printf("Name = %s\n",p->name);
    }

    //linked list 
	return 0;
}
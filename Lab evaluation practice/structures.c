#include <stdio.h>
struct student{
	char name[30];
	int roll;
	float marks;
	long long int phone;
};
int main()
{
	struct student st1={"Harjith",26,100.0,9899899898};
	struct student st2={"Naveen",1,110.0,9879879876};
	struct student st3={"Dharsan",'2',120.0,1231231234};
	printf("Details of studnet 1:\n");
	printf("Name: %s\n",st1.name);
	printf("Roll: %d\n",st1.roll);
	printf("Marks: %.2f\nPhone :%lld",st1.marks,st1.phone); // %lld does not support in this compiler use online gdb
	printf("Details of student 2:\n");
	printf("Name: %s\nRoll: %d\nMarks : %.2f",st2.name,st2.roll,st2.marks);
	printf("Details of student 3:\n");
	printf("Name: %s\nRoll: %c\nMarks : %.2f",st3.name,st3.roll,st3.marks);
	return 0;
}
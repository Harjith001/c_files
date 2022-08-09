#include <stdio.h>
struct name{  //inner structure
	char first[20];
	char middle[20];
	char last[20];
};
struct date{ //inner structure
	int day;
	int month;
	int year;
};
struct details{ //outer structure
	struct name full_name;
	struct date dd;
	int salary;
}detail1,detail2; //two struct variables for outer struc

int main()
{
	printf("Enter user 1's name - \n");
	printf("First name = ");
	scanf("%s",&detail1.full_name.first); //detail1 for first person
	printf("Middle name = ");
	scanf("%s",&detail1.full_name.middle); //full_name is the struct variable for name and middle is am element in structure
	printf("Last name = ");
	scanf("%s",detail1.full_name.last);

	printf("Enter user 2's name - \n");
	printf("First name = ");
	scanf("%s",&detail2.full_name.first);
	printf("Middle name = ");
	scanf("%s",&detail2.full_name.middle);
	printf("Last name = ");
	scanf("%s",detail2.full_name.last);

	printf("Name of first person = %s %s %s\n",detail1.full_name.first,detail1.full_name.middle,detail1.full_name.last);
	printf("Name of second person = %s %s %s",detail2.full_name.first,detail2.full_name.middle,detail2.full_name.last);
	return 0;
}
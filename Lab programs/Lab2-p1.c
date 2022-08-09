#include <stdio.h>
int main()
{
	//Selection (Conditional) Statements
    int num1,num2;
    printf("Enter number 1\n");
    scanf("%d",&num1);
    printf("Enter number 2\n");
    scanf("%d",&num2);

    //One way conditional
     if(num1==num2) // == is relational operator
     	printf("1.Both entered numbers are equal\n");

     if(num1=num2) /*this statement executes eventhough this is logically incorrect
     this is an assigning statement num2 will be stored in num2 and if checks whether num1 is zero 
     (executes even if its -ve)*/
     	printf("2.Both entered numbers are equal\n");

     if(num1==num2);/*statement is executed eventhough if its incorrect.";"" terminates the if statement at that
     instance so the if block is considered as normal line of code without condition*/
     	printf("3.Both entered numbers are equal\n");

    //two way conditonal
     if(num1==num2)
     {
     	printf("4.Both entered numbers are equal\n");
     }
     else
     {
        printf("4.Numbers are not equal\n");
     }
	return 0;
}
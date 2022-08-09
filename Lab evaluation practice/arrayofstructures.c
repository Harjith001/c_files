#include <stdio.h>
typedef struct student{
	char name[20];
	int roll;
	float marks[6];
}stu;
int main()
{
	int i,j,n=3;	
	stu s[4];
	for(i=0;i<n;i++)
	{
		printf("Enter details of student %d:\n",(i+1));
		printf("Name :");
		scanf("%s",&s[i].name);
		printf("Roll :");
		scanf("%d",&s[i].roll);
		printf("Marks :\n");
		for(j=0;j<6;j++)
		{
			printf("Enter marks for subject %d:",(j+1));
			scanf("%f",&s[i].marks[j]);
		}
	}
	//finding the highest marks
	float max=0.0;
	int index;
	for(i=0;i<3;i++)
	{
		float sum=0.0;
		for(j=0;j<6;j++)
		{
			sum=sum+s[i].marks[j];
		}
		if(sum>max)
		{
			max=sum;
			index=i;
		}
	}

	printf("\n\nDetails of students :\n");
	for(i=0;i<n;i++)
	{
		printf("Name : %s\n",s[i].name);
		printf("Roll : %d\n",s[i].roll);
		printf("Marks : %.2f\n",s[i].marks);
		for(j=0;j<6;j++)
		{
			printf("Marks for subject %d : %.2f\n",(j+1),s[i].marks[j]);
		}
		printf("\n\n");
	}

	printf("\n\n");
	printf("Student who got highest marks : \n");
	printf("Studetn name : %s\n",s[index].name);
	printf("Highest marks : %.2f\n",max);
	return 0;
}
#include <stdio.h>
enum week{
	mon=1,tues,wed,thues,fri,sat,sun};
int main()
{
	enum week today;
	int day;
	for (day = mon; day<=sun; day++)
	{
		printf("%d\n", day);
	}
	printf("Enter day of the week:");
	int i;
	scanf("%d", &i);
	today = i;
	if(today == mon)
		printf("Monday\n");
	return 0;
}
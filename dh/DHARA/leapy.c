#include<stdio.h>
void leap()
{
	int a;
	printf("Enter the year:");
	scanf("%d",&a);
	if(a%4==0 || a%400==0 || a%100==0)
	{
		printf("%d is a leap year",a);
	}
	else
	{
		printf("%d is not leap year",a);
	}
}
int main()
{
	leap();
	return 0;
}
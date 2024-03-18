#include<stdio.h>
void marks()
{
	int a;
	printf("Enter the marks:");
	scanf("%d",&a);
	if(a<=36)
	{
		printf("You are fail");
	}
	else
	{
		printf("You are pass");
	}
}
int main()
{
	marks();
	return 0;
}
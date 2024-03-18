#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age:");
	scanf("%d",&a);
	if(a<18)
	{
		printf("You are not aligible for voting");
	}
	else
	{
		printf("You are aligible for voting");
	}
	return 0;
}
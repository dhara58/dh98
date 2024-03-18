#include<stdio.h>
void dv5()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("%d is divisible by 5",a);
	}
	else
	{
		printf("%d is not divisible by 5:",a);
	}
}
int main()
{
	dv5();
	return 0;
}
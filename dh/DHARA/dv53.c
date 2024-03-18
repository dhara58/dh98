#include<stdio.h>
void dv53()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%5==0 && a%3==0)
	{
		printf("%d is divisible by 5 and 3",a);
	}
	else
	{
		printf("%d is not divisible by 5 and 3",a);
	}
}
int main()
{
	dv53();
	return 0;
}
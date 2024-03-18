#include<stdio.h>
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is positive",a);
	}
	
	return 0;
}
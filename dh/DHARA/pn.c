#include<stdio.h>
void pn()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is positive",a);
	}
}
int main()
{
	pn();
	return 0;
}
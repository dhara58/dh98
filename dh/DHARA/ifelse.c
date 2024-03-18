#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("%d is smaller than %d",a,b);
	
	}
	else
	{
		printf("%d is smaller than %d",b,a);
	}
	
	return 0;
}


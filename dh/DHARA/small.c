#include<stdio.h>
void smallest()
{
	int a,b;
	printf("Enter the two number:");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		printf("%d is smallest",a);
	}
	else
	{
		printf("%d is smallest",b);
	}
}
int main()
{
	smallest();
	return 0;
}
	

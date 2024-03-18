#include<stdio.h>
void sum(int a, int b)
{
	int i;
	printf("Enter the number:");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
}
int main()
{
	 sum(1,0);
	return 0;
}
#include<stdio.h>
void odd(int a,int b)
{
	int i;
	printf("Enter the number:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}
int main()
{
	odd(1,10);
	return 0;
}
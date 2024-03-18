#include<stdio.h>
int odd()
{
	int a=1,b,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("odd sum is:%d",sum);
}
int main()
{
	odd();
	return 0;
}
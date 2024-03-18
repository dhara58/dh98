#include<stdio.h>
int ser()
{
	int a=1,b=10,i,sum=0;
	for(i=a;i<=b;i++)
	{
		sum=sum+i;
	}
	//printf("sum of 1 to 10 numbers:%d",sum);
	return sum;
}
int main()
{
	int sum=ser();
	printf("sum of 1 to 10 numbers:%d",sum);
	return 0;
}
#include<stdio.h>
int sum(int a, int b)
{
	for(int i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
}
int main()
{
	 sum(51,99);
	return 0;
}
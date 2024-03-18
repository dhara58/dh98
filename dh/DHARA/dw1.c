#include<stdio.h>
int main()
{
	int i=1,sum=0;
	do
	{
		sum=sum+i;
		printf("%d\n",sum);
		i++;
	}
	while(i<=10);
	return 0;
}
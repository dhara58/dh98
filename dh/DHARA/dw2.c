#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	int i=1;
	do
	{
		if(i%2==0)
		{
			sum=sum+i;
			printf("%d\n",sum);
		}
		i++;
	}
	while(i<=n);
	return 0;
}
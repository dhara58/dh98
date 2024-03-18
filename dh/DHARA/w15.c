#include<stdio.h>
int main()
{
	int i=1,sum,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		else
		{
			sum=i*i;
			printf("%d\n",sum);
		}
		i++;
	}
	return 0;
}
			
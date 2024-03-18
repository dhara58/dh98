#include<stdio.h>
int main()
{
	int i=1,n,sum;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=i*i;
		printf("%d\n",sum);
		i++;
	}
	return 0;
}
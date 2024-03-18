#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{	
			sum=sum+i;
			printf("%d\n",sum);
		}
		i++;
	}
	return 0;
}
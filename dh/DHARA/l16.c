#include<stdio.h>
int main()
{
	int i,t,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
	}
	
return 0;
}
				
				
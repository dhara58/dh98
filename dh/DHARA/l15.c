#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{	
			sum=sum+i;
		}
		
	}
	printf("%d\n",sum);

return 0;
}
			
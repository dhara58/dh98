#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d\n",&n);
	{
		for(i=1;i<=n;i*=2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

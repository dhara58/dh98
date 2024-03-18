#include<stdio.h>
int main()
{
	int i,j,a=0,b=1,n,c;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
return 0;
}
		
	
#include<stdio.h>
int main()
{
	int i=1,a=0,b=1,c,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
		i++;
	}
	return 0;
}
		
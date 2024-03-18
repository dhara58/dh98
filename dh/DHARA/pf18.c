#include<stdio.h>
void fibo()
{
	int i,a=0,b=1,n=10,c;
	for(i=a;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	fibo();
	return 0;
}

	

	
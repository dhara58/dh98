#include<stdio.h>
int main()
{
	int i,j,a=11,b;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",a);
			a=a++;
			b=a+5;
		}
		printf("\n");
	}
return 0;
}
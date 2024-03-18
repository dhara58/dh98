#include<stdio.h>
int main()
{
	int i=1,a=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			if(a%5==0)
			{
				printf("%d ",a);
				a=a+6;
			}
			else
			{
				printf("%d ",a);
				a++;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
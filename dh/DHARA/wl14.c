#include<stdio.h>
int main()
{
	int i=1,a=1;
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(a<=15)
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
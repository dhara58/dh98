#include<stdio.h>
int main()
{
	int i=1,a=1;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{
			if(a<=25)
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
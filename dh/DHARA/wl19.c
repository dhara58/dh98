#include<stdio.h>
int main()
{
	int i=5;
	while(i>=1)
	{
		int j=i;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
		}
		i--;
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=9)
	{
		int j=1;
		while(j<=9)
		{
			printf("%d ",i);
			j=j+2;
		}
		printf("\n");
		i=i+2;
	}
	return 0;
}
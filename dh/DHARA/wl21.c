#include<stdio.h>
int main()
{
	char i='A';
	while(i<='E')
	{
		char j=i;
		while(j>='A')
		{
			printf("%c ",j);
			j--;
		}
		i++;
		printf("\n");
	}
	return 0;
}
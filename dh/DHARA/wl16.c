#include<stdio.h>
int main()
{
	char i=65;
	while(i<=69)
	{
		char j=65;
		while(j<=i)
		{
			printf("%c ",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
		
			
			
#include<stdio.h>
int main()
{
	int i=1;
	char a='A';
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(j%2!=0)
			{
				printf("%c ",a+32);
				a++;
			}
			else
			{
				printf("%c ",a);
				a++;
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
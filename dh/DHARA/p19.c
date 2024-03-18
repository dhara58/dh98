#include<stdio.h>
int main()
{
	int i,j;
	char a='a';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c ",a-32);
				a++;
			}
			else
			{
				printf("%c ",a);
				a++;
			}
		}
		printf("\n");
	}
return 0;
}
				
	
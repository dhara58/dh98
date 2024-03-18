#include<stdio.h>
int main()
{
	int i=0;
	while(i<5)
	{
		int j=0;
		while(j<2*(5-i)-1)
		{
			printf(" ");
			j++;
		}
			int k=0;
			while(k<(2*i)+1)
			{
				printf("* ");
				k++;
			}
		printf("\n");
		i++;
	}
	return 0;
}
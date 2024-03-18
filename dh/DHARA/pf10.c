#include<stdio.h>
void alpha(char a,char b)
{
	char i;
	char sum;
	printf("Enter the alphabet:");
	scanf("%c",&b);
	
	
	
		if(i>=65 && i<=90)
		{
			sum=i+32;
			printf("%c",sum);
		}
		else
		{
			sum=i-32;
			printf("%c",sum);
		}
	
}
int main()
{
	alpha('A','k');
	return 0;
}

	
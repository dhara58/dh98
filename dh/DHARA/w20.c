#include<stdio.h>
int main()
{
	char i=65;
	while(i<=90)
	{
		if(i%2!=0)
		{
			if(i%3==0 || i%5==0)
			{
				
			printf("%c\n",i+32);
			}
		}
		else
		{
			printf("%c\n",i);
		}
		i=i+2;
	}
	return 0;
}
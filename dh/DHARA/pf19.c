#include<stdio.h>
void chr()
{
	char i,a='A',b='Z';
	for(i=a;i<=b;i=i+2)
	{
		if(i%2==0)
		{
			printf("%c\n",i);
		}
		else
		{
			printf("%c\n",i-32);
		}
	}
}
int main()
{
	chr();
	return 0;
}
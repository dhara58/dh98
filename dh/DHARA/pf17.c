#include<stdio.h>
void chr()
{
	char i,a='A',b='Z';
	for(i=a;i<=b;i=i+2)
	{
		printf("%c\n",i);
	}
}
int main()
{
	chr();
	return 0;
}
#include<stdio.h>
void alpha(char a, char b)
{
	char i;
	for(i=a;i<=b;i++)
	{
		printf("%c\n",i);
	}
}
int main()
{
	alpha('A','Z');
	return 0;
}
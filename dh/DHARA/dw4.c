#include<stdio.h>
int main()
{
	char i='A';
	do
	{
		printf("%c\n",i);
		i=i+2;
	}
	while(i<='Z');
	return 0;
}
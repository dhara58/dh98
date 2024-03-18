#include<stdio.h>
void mix()
{
	char a='A',b='Z';
	int i;
	for(i=a;i<=b;i++)
	{
		printf("%c-%d\n",i,i);
	}
}
int main()
{
	mix();
	return 0;
}
	
	
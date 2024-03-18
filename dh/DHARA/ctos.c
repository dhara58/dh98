#include<stdio.h>
int main()
{
	char c,ch;
	printf("Enter capital character:");
	scanf("%c",&c);
	if(65<='c' && 'c'<=90)
	{
		ch=c+32;
		printf("%c",ch);
	}
	else
	{
		ch=c-32;
		printf("%c",ch);
	}
	return 0;
}
	
	
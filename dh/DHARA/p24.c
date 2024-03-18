o#include<stdio.h>
int main()
{
	char a;
	printf("Enter the character:");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
		printf("%c",a+32);
	}
	else
	{
		printf("%c",a-32);
	}
	return 0;
}
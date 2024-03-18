#include<stdio.h>
int main()
{
	char s[15];
	int i,l=0;
	printf("Enter the string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		l++;
	}
	printf("Your word was:%s\n",s);
	printf("length of this word is:%d\n",l);
	printf("Your reverse word is:");
	for(i=l-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
	return 0;
}
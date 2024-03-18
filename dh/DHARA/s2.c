#include<stdio.h>
int main()
{
	char s[15]="skill";
	int l=0;
	printf("Enter the word:");
	scanf("%s",&s);
	
	for(int i=0;s[i]!='\0';i++)
	{
		l++;
	}
		printf("word:%s\n",s);
		printf("length of word is:%d",l);
		
	
	return 0;
}
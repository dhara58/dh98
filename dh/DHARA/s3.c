#include<stdio.h>
int main()
{
	char s1[100]="skill";
	char s2[100]="qode";
	char s3[100];
	int i,j=0;
	printf("skill\n");
	printf("qode\n");
	for(i=0;s1[i]!='\0';i++,j++)
	{
		s3[j]=s1[i];
	}
	for(i=0;s2[i]!='\0';i++,j++)
	{
		s3[j]=s2[i];
	}
	printf("combine word:%s",s3);
	return 0;
}
	
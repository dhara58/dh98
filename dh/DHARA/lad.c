#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && c<b)
	{
		printf("%d is largest number",b);
	}
	else if(a<c && b<c)
	{
		printf("%d is largest number",c);
	}
	else
	{
		printf("%d is largest number",a);
	}
return 0;
}
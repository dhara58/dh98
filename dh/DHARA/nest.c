#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
		if(c<b)
		{	printf("%d is largest number",b);
		}
		else
		{
			printf("%d is largest number",c);
		}
	}
	else
	{
		printf("%d is largest number",a);
	}
return 0;
}
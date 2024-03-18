#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c:);
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c || b<a && b<c || c<a && c<b)
	{	printf("%d is greater",a|b|c);
	}
	else
	{
		printf("%d is greater",a|b|c);
		printf("%d is greater",a|b|c);
	}
return 0;
}
	
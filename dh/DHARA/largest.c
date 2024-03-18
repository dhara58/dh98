#include<stdio.h>
void large()
{
	int a,b,c;
	printf("Enter the a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is largest",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is largest",b);
	}
	else
	{
		printf("%d is latgest",c);
		
	}
}
int main()
{
	large();
	return 0;
}
	
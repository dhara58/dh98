#include<stdio.h>
int loop()
{
	int a,b=1,i;
	printf("Enter the number:");
	scanf("%d",&a);
	for(i=a;i>=b;i--)
	{
		printf("%d\n",i);
	}
}
int main()
{
	loop();
	return 0;
}
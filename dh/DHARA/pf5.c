#include<stdio.h>
int loop()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=-n;i<=n;i++)
	{
		printf("%d\n",i);
	}
}
int main()
{
	loop();
	return 0;
}
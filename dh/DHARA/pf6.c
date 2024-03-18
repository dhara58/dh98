#include<stdio.h>
void even()
{
	int a,b,i;

	printf("Enter the number:");
	scanf("%d %d",&a,&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
int main()
{
	even();
	return 0;
}

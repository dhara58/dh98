#include<stdio.h>
void ser(int a,int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			
			printf("%d\n",i*i);
		}
		else
		{
			
			printf("%d\n",i);
		}
	}
}
	int main()
	{
		
		ser(1,5);
		return 0;
	}
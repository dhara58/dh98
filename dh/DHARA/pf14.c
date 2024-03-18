#include<stdio.h>
void sq(int a,int n)
{
	int i,sum=0;
	
	for(i=a;i<=n;i++)
	{
		sum=i*i;
		printf("%d\n",sum);
	
	}

}
	int main()
	{
		int n;
		printf("Enter the number:");
		scanf("%d",&n);
		 sq(1,n);
		
		return 0;
	}
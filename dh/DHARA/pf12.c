#include<stdio.h>
int even(int a,int b)
{
	int i,sum=0;
	
	
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
		printf("even sum:%d\n",sum);
		return sum;
	
}
int main()
{
	int a,b;
	printf("Enter the number:");
	scanf("%d %d",&a,&b);
	int sum=even(a,b);
	return 0;
}
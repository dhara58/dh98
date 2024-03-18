#include<stdio.h>
int main()
{
	int n,j=1,i=1,k;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		k=i*j;
		printf("%d\n",k);
		j=j*2;
	}
	return 0;
}
		













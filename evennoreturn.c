#include<stdio.h>

void sum(int a,int b)
{
	int n,i;
	printf("enter the ele:");
	scanf("%d",&n);
    for(int i=a;i<=b;i++)
   {
    if(i%2==0)
    printf("%d\n",i);
   }
}
  int main()
{
  sum(1,50);
 return 0;
} 
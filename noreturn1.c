#include<stdio.h>

void sum(int a,int b)
{
	int i;
	printf("enter the ele:");
	scanf("%d",&b);
    for(int i=a;i<=b;i++)
   {
    printf("%d\n",i);
   }
}
  int main()
{
  sum(1,50);
 return 0;
} 
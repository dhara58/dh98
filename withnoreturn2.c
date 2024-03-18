#include<stdio.h>

void lp(int b,int a)
{
	int i;
	printf("enter the ele:");
	scanf("%d",&a);
    for(int i=b;i>=a;i--)
   {
    printf("%d\n",i);
   }
}
  int main()
{
  lp(60,1);
 return 0;
} 
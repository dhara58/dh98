#include<stdio.h>

int n(int a,int b)
{
int sum=0,i;
for(i=a;i<=b;i++)
	 {
	  sum=sum+i;
	 }
	  printf("%d\n",sum);
}	
int main()
{
 n(1,10);
 return 0;
} 
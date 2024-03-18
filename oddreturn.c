#include<stdio.h>

int total(int a,int b)
{
int sum=0,i;
for(i=a;i<=b;i++)
{
	  if(i%2!=0)
	  {
		  sum=sum+i;
	  }
}
		printf("sum of odd num:%d\n",sum);
	  
}	
int main()
{
 total(1,5);
 return 0;
} 
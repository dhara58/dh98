#include<stdio.h>

int even()
{
int i,num,a=1,b=10;
for(i=a;i<=b;i++)
 {
	if(i%2==0)
	{
	printf("sum of even num:%d\n",i*i);
	}
	else
	{
	printf("sum of odd num:%d\n",i);
	}  
 }
}	
int main()
{
 even();
 return 0;
} 
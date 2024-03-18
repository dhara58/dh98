#include<stdio.h>

int sq(int a,int b)
{
int sum=0,i;
for(i=a;i<=b;i++)
{
    {
     sum=i*i;
	}
    printf("number of square:%d\n",sum);
    }
}	
int main()
{
 sq(1,10);
 return 0;
} 
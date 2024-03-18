#include<stdio.h>
int fibo(int a,int b)
{
 int i,c,n=10;
 for(i=a;i<=n;i++)
 {
   printf("%d\n",a);
     c=a+b;
     a=b;
     b=c;
 }
}
int main()
{
  fibo(0,1);
  return 0;
}
     
  
   
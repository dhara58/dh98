#include<stdio.h>
 int sum1()
{
 int a=10;
 int b=20;
 int total=a+b;
 return total;
}
void sum3(int a,int b)
{
 int total=a+b;
 printf("total sum3 is %d\n",total);
}
 int sum4(int a,int b)
{
 int total=a+b;
 return total;
}

 int main()
{
  int total=sum1();
  printf("total is %d\n",total);
 
  sum3(10,20);
 
  int sm=sum4(10,20);
  printf("total is %d\n",sm);
 return 0;
} 
#include<stdio.h>

void interest()
{
  int p=100,r=5,t=2,sum=0;
  sum=p*r*t/100;
  printf("%d\n",sum);
}
int main()
{
 interest();
 return 0;
} 
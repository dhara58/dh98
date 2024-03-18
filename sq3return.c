#include<stdio.h>

void sq(int a,int b)
{
int i;
for(i=a;i<=b;i*=2)
 {
  printf("%d\n",i);
 }
} 
int main()
{
 sq(1,30);
 return 0;
} 
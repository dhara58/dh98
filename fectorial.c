#include<stdio.h>

int fectorial(int n)
{
  if(n<=1)
   {
     return 1;
   }
   else
   {
   return n*fectorial(n-1);
   }
}   
int main()
{
 int n;
 printf("enter the n:");
 scanf("%d",&n);
 printf("the fectorial %d id %d",n,fectorial(n));
 return 0;
} 
 
 
 
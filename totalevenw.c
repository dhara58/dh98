#include<stdio.h>
int main()
{ 
  int sum=0,i=1,n;
  printf("enter the n:");
  scanf("%d",&n);
  while(i<=n)
  {
	  if(i%2==0)
	 { 
	  sum=sum+i;
	 } 
	printf("%d\n",sum);
  
	i++;
  }
  return 0;
}
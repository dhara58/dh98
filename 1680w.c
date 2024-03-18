#include<stdio.h>
  int main()
{
    int j=1,k,i=1,n;
	printf("enter the n:");
	scanf("%d",&n);
	
	 while(i<=n)
	 {
		 {
	      k=i*j;
	      printf("%d\n",k);
	      j=j*2;
		 }
	 }	 
	   return 0;
}	   
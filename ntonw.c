#include<stdio.h>
 int main()
{  
   int n;
   printf("enter the n:");
   scanf("%d",&n);
   int i=-n;
   while(i>=n){
    
     printf("%d\n",i);
	 i--;
   }
    return 0;
}	
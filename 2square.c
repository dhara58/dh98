#include<stdio.h>
 int main()
{
   int i,n,total=0;
     
    printf("Enter number:");
    scanf("%d",&n);
     
      for(i=1;i<=n;i++)
	  {
		  
	   total=i*2;
	  }
	  
      printf("%d\n",total);
      
      return 0;
}	  
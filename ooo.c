#include<stdio.h>
int main()
{
     int i,j;
	 char a='a';
    for(int i=1;i<=5;i++)
	{
	  for(int j=1;j<=i;j++)
	  {	  
		  if(j%2==0)
		  {
	      printf("%c",a-32);
		 a++;
	  }
	  else
	  {
         printf("%c",a);
		 a++;
      }
	  
	  } 
	    printf("\n");
	  }
	  
       return 0;
}	   
	  
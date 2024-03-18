#include<stdio.h>
  int main()
{   
     int arr[10];
     int sum=0;
     int oddsum=0;   

      for(int i=0;i<10;i++)
	  {		  
       if(i%2==0){
	 
      sum=sum+i;
      }
      else{
   	    
	 oddsum=oddsum+i;
	    }
	 } 
     printf("%d\n",sum);
     printf("%d\n",oddsum);
	 
   return 0;
}   
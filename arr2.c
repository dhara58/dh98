#include<stdio.h>
  int main()
{  
     int arr1[10]={1,2,3,4,5};
	 int arr2[10]={6,7,8,9,10};
	 int total1=0;
	 int total2=0;
      for(int i=0;i<5;i++)
      {   
       total1=total1+arr1[i];
	   printf("%d\n",total1);
      }
      printf("\n");
	
      for(int i=0;i<5;i++)
       {
       total2=total2+arr2[i];
	   printf("%d\n",total2); 
       }
	    printf("\n");
       {
       printf("%d",total1+total2);		
	   }
       return 0;
}  
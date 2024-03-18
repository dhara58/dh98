#include<stdio.h>
   int main()
   {   
     int arr[5][5];
	 for(int i=0;i<3;i++){
		 for(int j=0;j<3;j++){
			 printf("enter the i %d j %d:",i,j);
		 }
	}
	
	 for(int i=0;i<3;i++){
		 for(int j=0;j<3;j++){
		  printf("enter the i %d j %d:",i,j);
          scanf("%d",&arr[i][j]);		  
		 }
	}		 
	   
}   
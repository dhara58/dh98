#include<stdio.h>
   int main()
{
   int arr[5][5]={{1,2},{3,4},{5,6},{7,8},{9,10}};
   int i,j,sum=0;
   
   for(int i=0;i<5;i++)
   {
      for(int j=0;j<5;j++)
     {
	 sum=sum+arr[i][j];
	 }
   }
    printf("total is :%d\n",sum);
return 0;	
}  
	
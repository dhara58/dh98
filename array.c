#include<stdio.h>
  int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9};
   
   for(int j=0;j<=5;j++)
   {
     printf("enter the value of %d\n",j);
     scanf("%d",&arr[j]);
   }
   
    return 0;
}	
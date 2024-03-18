#include<stdio.h>
  int main()
{ 
  char arr1[5]="skill";  
  char arr2[5]="qode";
  char arr3[5];
  int  i,j=0;
   for(int i=0;arr1[i]!='\0';i++,j++)
   {
	 arr3[j]=arr1[i];
   }	 
    for(int i=0;arr2[i]!='\0';i++,j++)
   {
	arr3[j]=arr2[i];
   }	
   printf("%s",arr3);   
    return 0;
}	 
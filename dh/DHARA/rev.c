#include<stdio.h>
void revs()
 { 
    int arr[5] = {1,2,3,4,5}; 
	int arr2[5],j=0;

	
    for(int i=0;i<5;i++)
	{
		printf("  %d", arr[i]);
	}
		printf("\n");
       
    for(int i =4 ; i>=0 ; i--)  
	{ 
		arr2[j]=arr[i];
		j++; 
	}
	
    for(int i=0;i<5;i++)
	{
		printf("  %d", arr2[i]);  
	}
 }
 int main()
 {
	 revs();
	 return 0;
 }
	 

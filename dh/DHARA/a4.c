#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int i,esum=0,osum=0;
	for(i=0;i<6;i++)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		
		else
		{
			osum=osum+i;
		}	
	}
		    printf("sum of total even number is:%d\n",esum);
			printf("sum of total odd number is:%d\n",osum);
		
	
		return 0;
}
	
#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i,osum=0,esum=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			esum=esum+arr[i];
		}
		else
		{
			osum=osum+arr[i];
		}
	}
	printf("sum of total even terms is:%d\n",esum);
	printf("sum of total odd terms is :%d\n",osum);
 return 0;
}
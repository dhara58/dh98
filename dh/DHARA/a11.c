#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,sum=0,sum1=0,sum2=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Enter the term %d ,%d :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
			else if(i<j)
			{
				sum1=sum1+arr[i][j];
			}
			else if(i>j)
			{
				sum2=sum2+arr[i][j];
			}
		}
	}
			printf("sum of diagonal is:%d\n",sum);
			printf("sum of upper diagonal is:%d\n",sum1);
			printf("sum of lower diagonal is:%d\n",sum2);
		return 0;
}
	
		
	

				
		
#include<stdio.h>
int main()
{
	int arr[4];
	int i,tm=0,per,grade;
	for(i=1;i<=3;i++)
	{
		printf("Enter the marks of sub %d :",i);
		scanf("%d",&arr[4]);
	}
	for(i=0;i<3;i++)
	{
		tm=tm+arr[4];
	}
		printf("Total marks is:%d\n",tm);
	
	
	{
		per=tm*100/150;
	}
		printf("Your percentage is:%d\n",per);
	
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=75)
	{
		printf("Grade B");
	}
	else if(per>=60)
	{
		printf("Grade C");
	}
	else
	{
		printf("You are fail");
	}
	return 0;
}
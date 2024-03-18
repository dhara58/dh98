#include<stdio.h>
int main()
{
	int u;
	float tb,total;
	printf("Enter unit:");
	scanf("%d",&u);
	if(u<=100)
	{
		tb=u*0.6+50;
	}
	else if(u<=200 & u>100)
	{
		tb=u*0.8+50;
	}
	else if(u<=300 & u>200) 
	{
		tb=u*0.9+50;
	}
	if(tb>300)
	{
		total=tb*15/100;
		printf("your amount is : %f",total);
	}
	else
	{
		printf("your amount is : %f ",tb);
	}
return 0;
}	
	
		
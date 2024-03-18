#include<stdio.h>
int main()
{
	int u;
	float total;
	printf("Enter the unit");
	scanf("%d",&u);
	if(u<=100 & u>0)
	{total=u*0.6+50;
	printf("your amount is:%f",total);
	}
	else if(u<=200 & u>100)
	{total=u*0.8+50;
	printf("your amount is:%f",total);
	}
	else
	{total=u*0.9+50;
	printf("your amount is:%f,total);
	}
	return 0;
}
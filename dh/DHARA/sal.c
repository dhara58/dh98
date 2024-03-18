#include<stdio.h>
int main()
{
	int s;
	float sl;
	printf("Enter salary :");
	scanf("%d",&s);
	if(s<=5000)
	{
		s=s+s*28/100;
		printf("your salary is:%d",s);
	}
	else if(s>5000 && s<=10000)
	{	
		s=s+s*42/100;
		printf("your salary is:%d",s);
	}
	else if(s>10000 && s<=15000)
	{
		s=s+s*55/100;
		printf("your salary is:%d",s);
	}
	else 
	{
		s=s+s*70/100;
		printf("your salary is:%d",s);
	}
	return 0;
}
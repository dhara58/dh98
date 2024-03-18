#include<stdio.h>
int main()
{
	int a;
	float tax;
	printf("Enter income:");
	scanf("%d",&a);
	if(a<2500 && a>=0)
	{	
		tax=a;
		printf("%d",&tax);
	}
	else if(a<5000 && a>=2500)
	{	
		tax=a+a*10/100;
		printf("%f",tax);
	}
	else if(a<10000 && a>=5000)
	{	
		tax=a+a*20/100;
		printf("%f",tax);
	}
	else 
	{
		tax=a+a*30/100;
		printf("%f",tax);
	}
return 0;
}
		
		
	
	
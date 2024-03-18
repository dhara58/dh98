#include<stdio.h>
int main()
{
	int m,e,s,total;
	float p;
	printf("Enter maths,english,science marks:");
	scanf("%d %d %d",&m,&e,&s);
	
	total=m+e+s;
	printf("Total is:%d\n",total);
	p=total*100/300;
	printf("percentage is:%f\n",p);
	
	if(p<35)
	{
		printf("you are fail");
	}
	else if(p<45 && p>=35)
	{
		printf("grade D");
	}
	else if(p<60 && p>=45)
	{
		printf("grade C");
	}
	else if(p<75 && p>=60)
	{
		printf("grade B");
	}
	else 
	{
		printf("grade A");
	}
	return 0;
}
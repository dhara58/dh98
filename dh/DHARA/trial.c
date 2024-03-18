#include<stdio.h>
//no argument , with return:
int sum1()
{
	int a=10;
	int b=20;
	int total=a+b;
	return  total;
}
int main()
{
	int total=sum1();
	printf("total is :%d\n",total);
	
}

// with argument, no return :
void sum3(int a,int b)
{
	int total=a+b;
	printf("total is:%d\n",total);
	
}
int main()
{
	sum3(10,20);
	return 0;
}

//with argument ,with return :
int sum4(int a,int b)
{
	int total=a+b;
	return total;
}
int main()
{
	int total=sum4(10,20);
	printf("total is %d\n",total);
	return 0;
}

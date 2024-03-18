#include<stdio.h>
int grade,sum=0,total=0,per,a,b,c;
int grad()
{
	sum=a+b+c;
	per=sum*100/150;
	printf("Total is :%d\n",sum);
	printf("Per is:%d\n",per);
	
	if(per>=85)
	{
		printf("Grade A");
	}
	else if(per>=70)
	{
		printf("Grade B");
	}
	else if(per>=50)
	{
		printf("Grade C");
	}
	else
	{
		printf("Grade D");
	}

}
int main()
{
	printf("Enter the three sub:");
	scanf("%d %d %d",&a,&b,&c);
	grad();
	return 0;
}
	
	
	
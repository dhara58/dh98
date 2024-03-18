#include<stdio.h>

int grade,sum=0,eng,guj,com,per;
int G()
{
  sum=eng+guj+com;
  per=sum*100/300;
  printf("total is :%d\n",sum);
  printf("per is :%d\n",per);
   if(per>=90)
   {
   printf("A grade");
   }
   else if(per>=75)
   { 
   printf("B grade");
   }
   else if(per>=50)
   {
   printf("C grade");
   }
   else
   {
   printf("D grade");
   }
}
int main()
{
 printf("enter the three sub:");
 scanf("%d %d %d",&eng,&guj,&com);
 G();
 return 0;
} 
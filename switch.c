#include<stdio.h>
int main()
{
 int a;
 printf("enter the value:");
 scanf("%d",&a);
 
 switch(a)
 {
   case 1:
     printf("the value of 1\n");
	 break;
	 
  case 2:
     printf("the value of 2\n");
     break;
	 
  default:
    printf("the value of %d",a);
    break;
 }
 for(int i=1;i<=10;i++)
 {
	 if(i==5)
	 {
	  continue;
	 }
     printf("%d\t",i);
 }	 
 
} 
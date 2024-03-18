#include<stdio.h>

void large(){
 int a,b,c;
 printf("enter the three value:");
 scanf("%d %d %d",&a,&b,&c);
 if(a>=b&&b>=c)
 {
  printf("%d is largest",a);
 }
 else if(b>=a&&b>=c)
 {
  printf("%d is largest",b);
 }
 else
 {
  printf("%d is largest",c);
 }
} 
 int main()
 {
   large();
   return 0;
}   
  
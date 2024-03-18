#include<stdio.h>

void ln(){
 int x;
 printf("enter the one value:");
 scanf("%d",&x);
 if(x%400==0||x%100==0||x%4==0){
  printf("%d is leap year",x);
 }
 else{
  printf("%d is not leap year",x);
 }
} 
 int main()
 {
   ln();
   return 0;
}   
  
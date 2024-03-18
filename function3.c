#include<stdio.h>

void np(){
 int x;
 printf("enter the one value:");
 scanf("%d",&x);
 if(x<0){
  printf("%d is negative",x);
 }
 else{
  printf("%d is positive",x);
 }
} 
 int main()
 {
   np();
   return 0;
}   
  
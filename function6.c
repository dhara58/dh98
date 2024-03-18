#include<stdio.h>

void pf(){
 int x;
 printf("enter the one value:");
 scanf("%d",&x);
 if(x>35){
  printf("%d is pass",x);
 }
 else{
  printf("%d is fail",x);
 }
} 
 int main()
 {
   pf();
   return 0;
}   
  
#include<stdio.h>

void dn(){
 int x;
 printf("enter the one value:");
 scanf("%d",&x);
 if(x%5==0){
  printf("%d is divisible",x);
 }
 else{
  printf("%d is not divisible",x);
 }
} 
 int main()
 {
   dn();
   return 0;
}   
  
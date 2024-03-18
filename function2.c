#include<stdio.h>

void small(){
 int x,y;
 printf("enter the two value:");
 scanf("%d %d",&x,&y);
 if(x<y){
  printf("x is smallest");
 }
 else{
  printf("y is smallest");
 }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
 int main()
 {
   small();
   return 0;
}   
  
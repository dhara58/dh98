#include<stdio.h>
 
void si(){
 int rate,qty,amt;
 float dis,ba,gst,nb;

 printf("enter rate:\n");
 scanf("%d",&rate);
 printf("enter quantity:\n");
 scanf("%d",&qty);

 amt=rate*qty;
 dis=amt*5/100;
 ba=amt-dis;
 gst=ba*18/100;
 nb=ba+gst;
  
 printf("rate\t qty\t amt\t dis\t ba\t gst\t net bill\n");
 printf("%d\t %d\t %d\t %2f\t %2f\t %2f\t %2f\t",rate,qty,amt,dis,ba,gst,nb);
}
int main()
{
 si();
 return 0;
} 
#include<stdio.h>  
int fibo(int i)  
{  
 if(i<=0)  
 {  
 return 0;  
 }  
 if(i<=1)  
 {  
 return 1;  
 }  
 else  
 {  
 return fibo(i-1)+fibo(i-2);  
 }  
}  
int main()  
{  
 int n;  
 printf("enter the value n:");  
 scanf("%d",&n);  
 for(int i=0;i<=n;i++)  
 {  
 printf("%d\n",fibo(i));  
 }  
 return 0;  
}

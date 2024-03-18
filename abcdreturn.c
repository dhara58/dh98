#include<stdio.h>

void sq(char a,char b)
{
char i;
for(i=a;i<=b;i=i+2)
 {
  printf("%c\n",i);
 }
} 
int main()
{
 sq('A','Z');
 return 0;
} 
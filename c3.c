#include<stdio.h>
  int main()
{
   char s[15]="skill";
   int l=0;

   for(int i=0;s[i]!='\0';i++)
   {
	   l++;
   }   
	 printf("word:%s\n",s);
	 printf("length of word: %d\n",l);
	for(int i=l-1;i>=0;i--)
    {
		
    printf("%c",s[i]);		
    }
    return 0;
}	
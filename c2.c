#include<stdio.h>
  int main()
{
   char s[15]={'s','k','i','l','l','\0'};
   int l=0;
   printf("enter the word:");
   scanf("%s",&s);
   
   for(int i=0;s[i]!='\0';i++)
   {
	   l++;
   }
	   
     printf("word:%s\n",s);
	 printf("length of word: %d",l);
   
    return 0;
}	
#include<stdio.h>
#include<string.h>
struct students
{
 int id;
 char name[50];
 int marks;
};
//struct students raj,kishan,prince;
int main()
{
 struct students raj,kishan,prince;

 raj.id=1;
 kishan.id=2;
 prince.id=3;
 raj.marks=95;n
 kishan.marks=75;
 prince.marks=85;
 
 strcpy(raj.name,"raj");
 strcpy(kishan.name,"kishan");
 strcpy(prince.name,"prince");
 
 printf("raj.id:%d\n",raj.id);
 printf("raj.name:%s\n",raj.name);
 
 printf("kishan.id:%d\n",kishan.id);
 printf("kishan.name:%s\n",kishan.name);
 
 printf("prince.id:%d\n",prince.id);
 printf("prince.name:%s\n",prince.name);
 
 return 0;
} 
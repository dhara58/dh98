
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch=='a','A'||ch=='e','E'||ch=='i','I'|| ch=='o','O' || ch=='u','U')
    {
        printf(" vowel");
    }
    else
    {
        printf("  constant");
    }
    return 0; 
}
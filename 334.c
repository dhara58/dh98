#include<stdio.h>
int main()
{
    int i, j;
    char a='A';
          for(i=5; i<=1; i++)
    {
        for(j=5; j<=i; j++)
        {
            printf("%c", a);
			a++;
        }
        printf("\n");
    }

    return 0;
}
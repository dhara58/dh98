#include<stdio.h>
int main() 
{ 
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 2 * (5 - i) - 1; j++) { 
            printf(" "); 
        } 
        for (int k = 0; k < 2 * i + 1; k++) { 
            printf("* "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}
			
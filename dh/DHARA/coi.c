#include <stdio.h> 
 
void Coins(int amount, int coins[], int numCoins)  
{ 
    printf("convert amount:", amount); 
 scanf("%d",&amount); 
 
 
    for (int i = 0; i < numCoins; i++)  
    { 
       int coinCount = amount / coins[i]; 
        amount = amount % coins[i]; 
        printf("%d * %d\n", coinCount, coins[i]); 
    } 
} 
 
int main()  
{ 
    int amount = 46; 
    int coins[] = {25, 10, 5, 2, 1}; 
    int numCoins = sizeof(coins) / sizeof(coins[0]); 
 
    Coins(amount, coins, numCoins); 
 
    return 0; 
}
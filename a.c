#include <stdio.h>

void findMinCoins(int coins[], int numCoins, int amount) {
    int count = 0;
    for (int i = numCoins - 1; i >= 0; i--) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            count++;
        }
    }

    printf("最少需要 %d 枚硬币\n", count);
}

int main() {
    int coins[] = {1, 5, 10, 25}; // 可用的硬币面额
    int numCoins = sizeof(coins) / sizeof(coins[0]); // 硬币的数量
    int amount = 47; // 需要找零的金额

    findMinCoins(coins, numCoins, amount);

    return 0;
}

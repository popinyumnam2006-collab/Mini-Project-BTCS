#include <stdio.h>

int main() {
    int n, i;
    int totalProfit = 0, totalLoss = 0, netBalance = 0;

    
    scanf("%d", &n);

    int records[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &records[i]);

        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += records[i];   
    }

    
    int lossAsPositive = -totalLoss;

    
    netBalance = totalProfit + totalLoss;  

    
    printf("Total Profit = %d\n", totalProfit);
    printf("Total Loss = %d\n", lossAsPositive);
    printf("Net Balance = %d", netBalance);

    return 0;
}

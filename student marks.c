#include <stdio.h>

int main() {
    int n, i;
    float total = 0, average;


    scanf("%d", &n);

    int marks[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    
    average = total / n;


    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f", average);

    return 0;
}

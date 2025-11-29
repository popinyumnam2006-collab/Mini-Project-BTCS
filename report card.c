#include <stdio.h>

int main() {
    int n, i;
    
    
    scanf("%d", &n);

    int marks[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    int min = marks[0];

    
    for (i = 1; i < n; i++) {
        if (marks[i] > max)
            max = marks[i];

        if (marks[i] < min)
            min = marks[i];
    }

    printf("Highest Marks = %d\n", max);
    printf("Lowest Marks = %d", min);

    return 0;
}

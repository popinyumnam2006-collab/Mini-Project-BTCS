#include <stdio.h>

int main() {
    int n, i, j;


    scanf("%d", &n);

    int bill[n][5];

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];
    int dayTotal[5] = {0};

    
    for (i = 0; i < n; i++)
        studentTotal[i] = 0;


    for (i = 0; i < n; i++) {
        for (j = 0; j < 5; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];  /
        }
    }


    for (i = 0; i < n; i++) {
        printf("Student %d total spending = %d\n", i + 1, studentTotal[i]);
    }

    
    int maxDay = 0;
    for (j = 1; j < 5; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }


    char days[5][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("Day with highest total collection: %s (%d)\n", days[maxDay], dayTotal[maxDay]);


    int maxSpend = studentTotal[0];
    for (i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    printf("Students with highest spending (%d): ", maxSpend);

    for (i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            printf("Student %d ", i + 1);
        }
    }

    return 0;
}

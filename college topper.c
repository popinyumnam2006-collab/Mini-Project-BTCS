#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;

    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int maxMath = marks[0][0];
    int maxPhysics = marks[0][1];
    int maxCS = marks[0][2];

    
    for (i = 1; i < 5; i++) {
        if (marks[i][0] > maxMath)
            maxMath = marks[i][0];

        if (marks[i][1] > maxPhysics)
            maxPhysics = marks[i][1];

        if (marks[i][2] > maxCS)
            maxCS = marks[i][2];
    }

    printf("Highest Marks in Mathematics = %d\n", maxMath);
    printf("Highest Marks in Physics = %d\n", maxPhysics);
    printf("Highest Marks in Computer Science = %d", maxCS);

    return 0;
}

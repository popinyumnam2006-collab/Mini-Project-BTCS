#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int totalPresent[10] = {0};
    int maxAttendance = 0;
    int studentWithMax = 0;

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j];
        }

        
        printf("Student %d was present for %d days\n", i + 1, totalPresent[i]);

        
        if (totalPresent[i] > maxAttendance) {
            maxAttendance = totalPresent[i];
            studentWithMax = i + 1;
        }
    }

    
    printf("Student with highest attendance: Student %d (%d days)", 
            studentWithMax, maxAttendance);

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    int present = 0, absent = 0;


    scanf("%d", &n);

    int attendance[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);

        if (attendance[i] == 1)
            present++;
        else
            absent++;
    }

    printf("Present: %d\n", present);
    printf("Absent: %d", absent);

    return 0;
}

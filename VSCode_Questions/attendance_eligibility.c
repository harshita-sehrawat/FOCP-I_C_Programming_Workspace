#include <stdio.h>

int main() {
    int attendance[10];
    int eligible = 0;
    int noteligible = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("Enter attendance percentage for student %d: ", i + 1);
        scanf("%d", &attendance[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (attendance[i] >= 75) {
            eligible++;
        } else {
            noteligible++;
        }
    }

    
    printf("\n--- Attendance Summary ---");
    printf("\nNumber of eligible students (>= 75%): %d", eligible);
    printf("\nNumber of students falling not eligible (< 75%): %d\n", noteligible);

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter the number of students (N): ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Number of students must be greater than 0.\n");
        return 1;
    }

    float marks[n];
    float sum = 0;

    
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; 
    }

   
    float average = sum / n;
    printf("\nClass Average Marks: %.2f\n", average);

    float highest = marks[0];
    float lowest = marks[0];

    
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    
    printf("\n--- Performance Report ---");
    printf("\nClass Average Marks: %.2f", average);
    printf("\nHighest Marks:       %.2f", highest);
    printf("\nLowest Marks:        %.2f\n", lowest);

    return 0;
}

  
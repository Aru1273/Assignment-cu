#include <stdio.h>

int main() {
    int physics, chemistry, mathematics;
    float total_marks, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    // Calculate total marks
    total_marks = physics + chemistry + mathematics;

    // Calculate percentage
    percentage = (total_marks / 300) * 100;

    // Assign grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
        if (percentage >= 95)
            grade = '+';
    } else if (percentage >= 80) {
        grade = 'A';
    } else if (percentage >= 70) {
        grade = 'B';
        if (percentage >= 75)
            grade = '+';
    } else if (percentage >= 60) {
        grade = 'B';
    } else if (percentage >= 40) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    // Display results
    printf("\nTotal marks obtained: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}

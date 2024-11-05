#include <stdio.h>

int main() {
    int marks;
    char grade;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);
    switch (marks / 10) {
        case 10: // This case handles marks >= 100
        case 9:  // Marks between 90 to 99
            if (marks >= 95)
                grade = 'O';
            else
                grade = 'A'; // Marks between 90 to 94
            break;

        case 8:  // Marks between 80 to 89
            grade = 'A';
            break;

        case 7:  // Marks between 70 to 79
            grade = 'B';
            break;

        case 6:  // Marks between 60 to 69
            grade = 'C';
            break;

        case 5:  // Marks between 50 to 59
            grade = 'D';
            break;

        case 4:  // Marks between 40 to 49
            grade = 'E';
            break;

        default:  // Marks less than 40
            grade = 'F';
            break;
    }
    printf("The grade of the student is: %c\n", grade);
    return 0;
}

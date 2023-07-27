/*Write an interactive C program to find the total, average, Grade (A, B, C, D, E) for students in 6 courses, whose maximum marks in each course is 100 marks. 40 marks is the pass-marks in each of the course's.
A —> 70% 
B —> 69.9 and 60 
C —> 59.9 and 50 
D —> 49.9 and 40 
E —> failed<40%
Note : Assumptions can be made wherever necessary*/

#include <stdio.h>

// Function to calculate the grade based on average marks
void grade(int marks[]) {
    int total_marks = 0;
    float average_marks;
    char grade;

    // Calculate the total marks
    for (int i = 0; i < 6; i++) {
        total_marks += marks[i];
    }

    // Calculate the average marks
    average_marks = total_marks / 6.0;

    // Determine the grade based on the average marks
    if (average_marks >= 70)
        grade = 'A';
    else if (average_marks >= 60 && average_marks < 70)
        grade = 'B';
    else if (average_marks >= 50 && average_marks < 60)
        grade = 'C';
    else if (average_marks >= 40 && average_marks < 50)
        grade = 'D';
    else
        grade = 'E';

    // Print the results
    printf("Total marks = %d, Average Marks = %.2f, Grade = %c\n", total_marks, average_marks, grade);
}

int main() {
    int marks[6];
    printf("Enter the marks for 6 courses:\n");

    // Input marks for 6 courses
    for (int i = 0; i < 6; i++)
        scanf("%d", &marks[i]);

    // Call the grade function to calculate and print the result
    grade(marks);

    return 0;
}

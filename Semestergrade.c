#include <stdio.h>
float grade(float marks) {
    if (marks > 100 || marks < 0) {
        printf("Invalid Number");
        return 0.00;
    }
    if (marks >= 80 && marks<=100) {
        printf("A+");
        return 4.00;
    } else if (marks >= 75 && marks < 80) {
        printf("A");
        return 3.75;
    } else if (marks >= 70 && marks < 75) {
        printf("A-");
        return 3.50;
    } else if (marks >= 65 && marks < 70) {
        printf("B+");
        return 3.25;
    } else if (marks >= 60 && marks < 65) {
        printf("B");
        return 3.00;
    } else if (marks >= 55 && marks < 60) {
        printf("B-");
        return 2.75;
    } else if (marks >= 50 && marks < 55) {
        printf("C+");
        return 2.50;
    } else if (marks >= 45 && marks < 50) {
        printf("C");
        return 2.25;
    } else if (marks >= 40 && marks < 45) {
        printf("D");
        return 2.00;
    } else {
        printf("Fail");
        return 0.00;
    }
}


int main() {
    float q, a, p, at, m, f, total;
    float sumgrades = 0.0;
    int num_subjects = 5;

    for (int i = 1; i <= num_subjects; i++) {
        printf("For subject %d\n", i);
        printf("Enter quiz mark: ");
        scanf("%f", &q);
        printf("Enter assignment mark: ");
        scanf("%f", &a);
        printf("Enter presentation mark: ");
        scanf("%f", &p);
        printf("Enter Attendance mark: ");
        scanf("%f", &at);
        printf("Enter Mid Exam mark: ");
        scanf("%f", &m);
        printf("Enter Final Exam mark: ");
        scanf("%f", &f);
        total = q + a + p + at + m + f;
        printf("\nSubject %d total mark is %.2f\n", i, total);
        printf("Subject %d Letter grade is ",i);
        float gradevalue = grade(total);
        printf("\nSubject %d grade is: %.2f\n", i, gradevalue);
        printf("\n");
        if (gradevalue != 0.00) {
            sumgrades += gradevalue;
        }
    }
    printf("\nYour semester grade is %.2f\n", sumgrades/5);
    return 0;
}

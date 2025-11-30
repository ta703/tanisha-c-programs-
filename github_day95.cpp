//Q145 Return a structure containing top student's details from a function.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   
}

int main() {
    int n, i;
    struct Student students[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    struct Student topper = getTopStudent(students, n);

    printf("\n---- Top Student Details ----\n");
    printf("Name      : %s\n", topper.name);
    printf("Roll No   : %d\n", topper.roll_no);
    printf("Marks     : %.2f\n", topper.marks);

    return 0;
}

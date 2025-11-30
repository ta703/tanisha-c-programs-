//Q143 Find and print the student with the highest marks.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, index = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    float highest = s[0].marks;
    for (i = 1; i < 5; i++) {
        if (s[i].marks > highest) {
            highest = s[i].marks;
            index = i;
        }
    }

    printf("\n\n---- Student with Highest Marks ----\n");
    printf("Name      : %s\n", s[index].name);
    printf("Roll No   : %d\n", s[index].roll_no);
    printf("Marks     : %.2f\n", s[index].marks);

    return 0;
}

//Q144 Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s);

int main() {
    struct Student st;

    printf("Enter Name: ");
    scanf("%s", st.name);

    printf("Enter Roll Number: ");
    scanf("%d", &st.roll_no);

    printf("Enter Marks: ");
    scanf("%f", &st.marks);

    display(st);

    return 0;
}

void display(struct Student s) {
    printf("\n---- Student Details ----\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.roll_no);
    printf("Marks     : %.2f\n", s.marks);
}

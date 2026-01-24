#include <stdio.h>
struct student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
struct student s1, s2;
float average;
    printf("Enter details for 1:\n");
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter total_marks: ");
    scanf("%f", &s1.total_marks);

    printf("\nEnter details for 2\n");
    printf("Enter name: ");
    scanf("%s", s2.name);
    printf("Enter age: ");
    scanf("%d", &s2.age);
    printf("Enter total marks: ");
    scanf("%f", &s2.total_marks);

    printf("\n--student information--\n");
    printf("student 1: %s, Age: %d, Total_marks: %.2f\n", s1.name, s1.age, s1.total_marks);
    printf("student 2: %s, Age: %d, Total_marks: %.2f\n", s2.name, s2.age, s2.total_marks);

    average = (s1.total_marks + s2.total_marks) / 2;
    printf("\nAverage marks: %.2f\n", average);

    return 0;
}

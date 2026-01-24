#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
struct Employee *emp;
int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    emp = (struct Employee *)malloc(n * sizeof(struct Employee));
    
    for(i = 0; i < n; i++) {
        printf("Enter details of employee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].salary);
    }

    free(emp);
    return 0;
}

#include <stdio.h>

typedef struct {
    int day, month, year;
} date;

typedef struct {
    int code;
    float salary;
    int dept;
    date joining;
} employee;

void display_max_min(employee emp[], int n) {
    if (n == 0) return;
    int max_idx = 0, min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[max_idx].salary) max_idx = i;
        if (emp[i].salary < emp[min_idx].salary) min_idx = i;
    }
    printf("Employee with maximum salary:\n");
    printf("Code: %d, Salary: %.2f, Dept: %d, Joining: %d/%d/%d\n",
           emp[max_idx].code, emp[max_idx].salary, emp[max_idx].dept,
           emp[max_idx].joining.day, emp[max_idx].joining.month, emp[max_idx].joining.year);
    printf("Employee with minimum salary:\n");
    printf("Code: %d, Salary: %.2f, Dept: %d, Joining: %d/%d/%d\n",
           emp[min_idx].code, emp[min_idx].salary, emp[min_idx].dept,
           emp[min_idx].joining.day, emp[min_idx].joining.month, emp[min_idx].joining.year);
}

void search_employee(employee emp[], int n, int code) {
    for (int i = 0; i < n; i++) {
        if (emp[i].code == code) {
            printf("Employee found:\n");
            printf("Code: %d, Salary: %.2f, Dept: %d, Joining: %d/%d/%d\n",
                   emp[i].code, emp[i].salary, emp[i].dept,
                   emp[i].joining.day, emp[i].joining.month, emp[i].joining.year);
            return;
        }
    }
    printf("Employee with code %d not found.\n", code);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    employee emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Code: ");
        scanf("%d", &emp[i].code);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("Department: ");
        scanf("%d", &emp[i].dept);
        printf("Joining date (day month year): ");
        scanf("%d %d %d", &emp[i].joining.day, &emp[i].joining.month, &emp[i].joining.year);
    }
    
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Display employee with max and min salary\n");
        printf("2. Search employee by code\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                display_max_min(emp, n);
                break;
            case 2:
                {
                    int code;
                    printf("Enter employee code to search: ");
                    scanf("%d", &code);
                    search_employee(emp, n, code);
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 3);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
    int id;
    char name[12];
    int age;
    float salary;
} employee_t;

void emp_info(employee_t emp);
int emp_average_age(employee_t emp[], int n);
void emp_writefile(employee_t emp[], int n);
void emp_readfile(employee_t emp[]);

void emp_info(employee_t emp) {
    printf("employee id=%d\n", emp.id);
    printf("employee name=%s\n", emp.name);
    printf("employee age=%d\n", emp.age);
    printf("employee salary=%.2f\n\n", emp.salary); 
}

int emp_average_age(employee_t emp[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) { 
        sum += emp[i].age;
    }
    return sum / n; 
}

void emp_writefile(employee_t emp[], int n) {
    FILE *fp = fopen("employee.bin", "wb"); 
    if (!fp) {
        printf("Error opening file for writing\n");
        return;
    }
    fwrite(emp, sizeof(employee_t), n, fp); 
    fclose(fp);
}

void emp_readfile(employee_t emp[]) {
    FILE *fp = fopen("employee.bin", "rb"); 
    if (!fp) {
        printf("Error opening file for reading\n");
        return;
    }
    int i = 0;
    while (fread(&emp[i], sizeof(employee_t), 1, fp)) {
        i++;
    }
    fclose(fp);
}

int main() {
    employee_t emp[3] = {
        {1, "IU", 20, 30000.0},
        {2, "taylor", 26, 36000.0},
        {3, "swift", 31, 90000.0}
    };

    emp_writefile(emp, 3);

    employee_t read_emp[10]; 
    emp_readfile(read_emp);

    for (int i = 0; i < 3; i++) {
        emp_info(read_emp[i]);
    }

    return 0;
}

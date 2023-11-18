#include <stdio.h>
#include <stdlib.h>
#include <time.h>


enum Department {HR,Sales,Research,Software,Executive};

struct Employee {
    enum Department department;
    int annual_salary;
    unsigned int ssn;
};


int generateRandomOffset() {
    return rand() % 5000 + 1000;  
}


int generateSalary(enum Department department) {
    int base_salary;

   
    switch (department) {
        case HR:
            base_salary = 50000;
            break;
        case Sales:
            base_salary = 60000;
            break;
        case Research:
            base_salary = 70000;
            break;
        case Software:
            base_salary = 80000;
            break;
        case Executive:
            base_salary = 100000;
            break;
        default:
            base_salary = 0;
            break;
    }


    return base_salary + generateRandomOffset();
}

int main() {
  
    srand(time(NULL));

    
    for (int i = 0; i < 10; ++i) {
        struct Employee employee;

        
        employee.department = rand() % 5; 
        employee.annual_salary = generateSalary(employee.department);
        employee.ssn = 100000000 + i;  

       
        printf("Employee %d:\n", i + 1);
        printf("Department: %d\n", employee.department);
        printf("Annual Salary: %d\n", employee.annual_salary);
        printf("SSN: %u\n", employee.ssn);
        printf("\n");
    }

    return 0;
}

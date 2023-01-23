//calculates the total salary based on the condition given:
// if salary < 20000 give 40% salary,if salary >= 20000 give 50% salary.
#include <stdio.h>

int main() {
    float salary, total_salary;
    printf("Enter the salary: ");
    scanf("%f", &salary);
    if (salary < 20000) {
        total_salary = salary + (salary * 0.4);
    } else {
        total_salary = salary + (salary * 0.5);
    }
    printf("The total salary is: %.2f\n", total_salary);
    return 0;
}

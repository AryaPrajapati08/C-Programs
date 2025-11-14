#include <stdio.h>

int main() {
    float grossSalary, allowance, deduction, netSalary;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &grossSalary);

    // Calculations
    allowance = 0.10 * grossSalary;   // 10% allowance
    deduction = 0.03 * grossSalary;   // 3% deduction
    netSalary = grossSalary + allowance - deduction;

    // Output results
    printf("Allowance: %.2f\n", allowance);
    printf("Deduction: %.2f\n", deduction);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}

#include <stdio.h>

int main() {
    float basicSalary, hraRate, daRate, hra, da, grossPay;

    // Prompt user to input basic salary
    printf("Enter the employee's basic salary: ");
    scanf("%f", &basicSalary);

    // Determine HRA and DA rates based on salary ranges
    if (basicSalary <= 10000) {
        hraRate = 0.18;
        daRate = 0.75;
    } else if (basicSalary <= 20000) {
        hraRate = 0.22;
        daRate = 0.85;
    } else {
        hraRate = 0.30;
        daRate = 0.95;
    }

    // Calculate HRA, DA, and Gross Pay
    hra = basicSalary * hraRate;
    da = basicSalary * daRate;
    grossPay = basicSalary + hra + da;

    // Display results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Pay: %.2f\n", grossPay);

    return 0;
}

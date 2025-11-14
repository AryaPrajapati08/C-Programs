#include <stdio.h>

int main() {
    float grossSales, discount, netSales;

    // Input gross sales
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);

    // Calculations
    discount = 0.10 * grossSales;   // 10% discount
    netSales = grossSales - discount;

    // Output results
    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", netSales);

    return 0;
}

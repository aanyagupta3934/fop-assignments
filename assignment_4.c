#include <stdio.h>

int main() {
    float basic, hra, ta, gross, pt, net;

    // Input basic pay
    printf("Enter Basic Pay of the employee: ");
    scanf("%f", &basic);

    // Calculations
    hra = 0.10 * basic;
    ta = 0.05 * basic;
    gross = basic + hra + ta;
    pt = 0.02 * gross;
    net = gross - pt;

    // Output results
    printf("\n--- Salary Details ---");
    printf("\nBasic Pay: %.2f", basic);
    printf("\nHRA (10%%): %.2f", hra);
    printf("\nTA (5%%):   %.2f", ta);
    printf("\n-----------------------");
    printf("\nGross Salary: %.2f", gross);
    printf("\nProf. Tax (2%%): %.2f", pt);
    printf("\nNet Salary:    %.2f", net);
    printf("\n-----------------------\n");

    return 0;
}
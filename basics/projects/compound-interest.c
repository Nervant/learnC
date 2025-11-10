#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0;       // initial amount
    double rate = 0.0;            // annual interest rate (%)
    int years = 0;                // number of years
    int timesCompounded = 0;      // times interest is compounded per year
    double total = 0.0;           // final amount after compounding

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate %% (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;            // convert % to decimal

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    // compound interest formula: A = P(1 + r/n)^(n*t)
    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("\nAfter %d years, the total will be %.2lf", years, total);

    return 0;
}
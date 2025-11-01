#include <stdio.h>
#include <math.h>

int main() {

    double x = 3.14;
    double y = 9;
    double result;

    // square root
    result = sqrt(y);
    printf("sqrt(%.0f) = %.2f\n", y, result);

    // power
    result = pow(2, 4);
    printf("pow(2, 4) = %.0f\n", result);

    // rounding
    result = round(x);
    printf("round(%.2f) = %.0f\n", x, result);

    // ceiling (round up)
    result = ceil(x);
    printf("ceil(%.2f) = %.0f\n", x, result);

    // floor (round down)
    result = floor(x);
    printf("floor(%.2f) = %.0f\n", x, result);

    // absolute value
    result = fabs(-3.14);
    printf("fabs(-3.14) = %.2f\n", result);

    // logarithm
    result = log(2.71828);
    printf("log(2.71828) = %.2f\n", result);

    // trigonometry
    result = sin(x);
    printf("sin(%.2f) = %.2f\n", x, result);

    result = cos(x);
    printf("cos(%.2f) = %.2f\n", x, result);

    result = tan(x);
    printf("tan(%.2f) = %.2f\n", x, result);

    return 0;
}

/*
 * MATH FUNCTIONS (requires #include <math.h>):
 * sqrt(x)  - square root
 * pow(x,y) - x raised to the power of y
 * round(x) - round to nearest integer
 * ceil(x)  - round up
 * floor(x) - round down
 * fabs(x)  - absolute value
 * log(x)   - natural logarithm
 * sin(x)   - sine
 * cos(x)   - cosine
 * tan(x)   - tangent
 */

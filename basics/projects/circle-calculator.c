#include <stdio.h>
#include <math.h>

int main(){
    double radius = 0.0;        // input radius
    double area = 0.0;          // circle area
    double surfaceArea = 0.0;   // sphere surface area
    double volume = 0.0;        // sphere volume
    const double PI = 3.14159265359;  // constant value of pi

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    // calculations
    area = PI * pow(radius, 2);                   // area of circle
    surfaceArea = 4 * PI * pow(radius, 2);        // surface area of sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3);   // volume of sphere

    // output results
    printf("\nArea: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}
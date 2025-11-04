#include <stdio.h>

int main(){
    int convert = 0;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    float kelvin =0.0f;

    printf("Temperature Converter!\n\n");

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");

    printf("Enter: ");
    scanf("%d", &convert);

    if(convert == 1){
        printf("\nEnter the temperature: ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        
        printf("\nIt is %.2f in Fahrenheit", fahrenheit);
    }
    else if(convert == 2){
        printf("\nEnter the temperature: ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * (5.0 / 9.0);

        printf("\nIt is %.2f in Celsius", celsius);
    }
    else if(convert == 3){
        printf("\nEnter the temperature: ");
        scanf("%f", &celsius);

        kelvin = celsius + 273.15;

        printf("\nIt is %.2f in Kelvin", kelvin);
    }
    else if(convert == 4){
        printf("\nEnter the temperature: ");
        scanf("%f", &kelvin);

        celsius = kelvin - 273.15;

        printf("\nIt is %.2f in Celsius", celsius);
    }
    else if(convert == 5){
        printf("\nEnter the temperature: ");
        scanf("%f", &fahrenheit);

        kelvin = (fahrenheit - 32) * (5.0 / 9.0) + 273.15;

        printf("\nIt is %.2f in Kelvin", kelvin);
    }
    else if(convert == 6){
        printf("\nEnter the temperature: ");
        scanf("%f", &kelvin);

        fahrenheit = (kelvin - 273.15) * (9.0 / 5.0) + 32;

        printf("\nIt is %.2f in Fahrenheit", fahrenheit);
    }
    else{
        printf("\nInvalid Input!");
    }

    return 0;
}
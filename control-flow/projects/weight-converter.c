#include <stdio.h>

int main(){
    int unit = 0;
    float kg = 0.0f;
    float lbs = 0.0f;

    printf("Weight Converter Program\n\n");
    
    printf("1. Kilogram to Pounds\n");
    printf("2. Pounds to Kilogram\n");
    
    printf("Enter: ");
    scanf("%d", &unit);

    if(unit == 1){
        printf("\nEnter your weight: ");
        scanf("%f", &kg);

        lbs = kg * 2.2;

        printf("\nYou are %.2f lbs", lbs);
        
    }
    else if(unit == 2){
        printf("\nEnter your weight: ");
        scanf("%f", &lbs);

        kg = lbs / 2.2;

        printf("\nYou are %.2f kg", kg);
    }
    else{
        printf("\nInvalid choice please choose (1) or (2)!");
    }

    return 0;
}
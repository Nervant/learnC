#include <stdio.h>

// array of structs = array where each element contains a struct {}
//                    helps organize and group together related data

// define Car struct with typedef
typedef struct {
    char model[20];
    int year;
    int price;
} Car;

int main() {

    // create array of structs
    Car cars[] = {
        {"Mustang", 2025, 32000}, 
        {"Corvette", 2026, 68000},
        {"Challenger", 2024, 29000}
    };

    // calculate number of cars
    int numCars = sizeof(cars) / sizeof(cars[0]);

    printf("===== CAR INVENTORY =====\n\n");

    // loop through and display all cars
    for (int i = 0; i < numCars; i++) {
        printf("Car #%d\n", i + 1);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: $%d\n", cars[i].price);
        printf("\n");
    }

    return 0;
}

/*
 * ARRAY OF STRUCTS:
 * 
 * declaration:
 * StructName arrayName[] = {
 *     {member1, member2, ...},
 *     {member1, member2, ...}
 * };
 * 
 * accessing elements:
 * arrayName[index].memberName
 * 
 * example:
 * cars[0].model    // access first car's model
 * cars[1].year     // access second car's year
 * 
 * benefits:
 * - store multiple related records
 * - easy to loop through data
 * - organized data management
 * - similar to database tables
 * 
 * common uses:
 * - student records
 * - product inventory
 * - employee database
 * - game characters
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// struct = a user-defined data type that groups related variables under one name
//          variables inside a struct are called "members"
//          members can be of different data types

// define struct with typedef
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

// function prototype
void printStudent(Student student);

int main() {

    // ========== CREATING AND INITIALIZING STRUCTS ==========

    // method 1: initialize all at once
    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    
    // method 2: initialize then assign values
    Student student4 = {0};
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    // print all students
    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

// function to print student information
void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}

/*
 * STRUCTS:
 * 
 * definition:
 * struct StructName {
 *     datatype member1;
 *     datatype member2;
 * };
 * 
 * with typedef:
 * typedef struct {
 *     datatype member1;
 * } StructName;
 * 
 * accessing members:
 * structVariable.memberName
 * 
 * benefits:
 * - group related data together
 * - more organized code
 * - easier to pass multiple values to functions
 * - creates custom data types
 * 
 * common uses:
 * - representing real-world objects (rerson, car, book)
 * - database records
 * - complex data structures
 */

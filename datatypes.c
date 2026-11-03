
#include <stdio.h>

int main(void)
{
    // ==========================================
    // 1. BASIC DATA TYPES
    // ==========================================

    int age = 20;                 // Integer: %d
    char initial = 'A';           // Single character: %c
    float marks = 12.563f;        // Float: %f
    double pi = 3.1415926535;     // Double: %f in printf()

    printf("=== BASIC DATA TYPES ===\n");
    printf("Age: %d\n", age);
    printf("Initial: %c\n", initial);
    printf("Marks: %f\n", marks);
    printf("Pi: %.10f\n", pi);


    // ==========================================
    // 2. INTEGER TYPE MODIFIERS
    // ==========================================

    short int small = 100;               // Short integer: %hd
    unsigned int count = 4000U;          // Non-negative integer: %u
    long int population = 100000L;       // Long integer: %ld
    long long int distance = 9000000000LL; // Long long: %lld

    signed int temperature = -10;        // Signed integer: %d
    unsigned short int items = 500;      // Unsigned short: %hu
    unsigned long int views = 400000UL;  // Unsigned long: %lu
    unsigned long long int stars = 9000000000ULL;
                                         // Unsigned long long: %llu

    printf("\n=== INTEGER MODIFIERS ===\n");
    printf("Short: %hd\n", small);
    printf("Unsigned int: %u\n", count);
    printf("Long: %ld\n", population);
    printf("Long long: %lld\n", distance);
    printf("Signed int: %d\n", temperature);
    printf("Unsigned short: %hu\n", items);
    printf("Unsigned long: %lu\n", views);
    printf("Unsigned long long: %llu\n", stars);


    // ==========================================
    // 3. FLOATING-POINT TYPES
    // ==========================================

    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    printf("\n=== FLOATING-POINT TYPES ===\n");
    printf("Float: %f\n", f);
    printf("Double: %.10f\n", d);
    printf("Long double: %Lf\n", ld);


    // ==========================================
    // 4. STRINGS AND CHARACTERS
    // ==========================================

    char grade = 'A';           // One character: %c
    char name[] = "Arav";       // Character array/string: %s

    printf("\n=== CHARACTERS AND STRINGS ===\n");
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);


    // ==========================================
    // 5. SIZE OF DATA TYPES
    // ==========================================

    printf("\n=== SIZE OF DATA TYPES ===\n");
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of short int: %zu byte(s)\n", sizeof(short int));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));


    char fullname[] = "aravpalsule";
    printf("my full name is %s" , fullname);

    // ==========================================
    // 6. VOID
    // ==========================================

    // void means "no value".
    // It is commonly used as a function return type.
    // Example: void greet(void);


    // ==========================================
    // 7. OTHER C DATA TYPE CATEGORIES
    // ==========================================

    // Array: int numbers[5];
    // Pointer: int *ptr;
    // Structure: struct Student { int age; };
    // Union: union Data { int i; float f; };
    // Enumeration: enum Day { MON, TUE, WED };
    // Typedef: typedef unsigned int uint;

    return 0;
}

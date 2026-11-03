
#include <stdio.h>

// TYPE 1: No arguments, no return value
void greet(void)
{
    printf("Hello!\n");
}

// TYPE 2: With arguments, no return value
void add(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

// TYPE 3: No arguments, with return value
int getNumber(void)
{
    return 10;
}

// TYPE 4: With arguments, with return value
int multiply(int a, int b)
{
    return a * b;
}

int main(void)
{
    // Calling Type 1
    greet();

    // Calling Type 2
    add(5, 3);

    // Calling Type 3
    int n = getNumber();
    printf("Number = %d\n", n);

    // Calling Type 4
    int result = multiply(5, 3);
    printf("Product = %d\n", result);

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, result;
    
    // Arithmetic Operators
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Arithmetic Operators:\n");
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    
    // Relational Operators
    printf("Relational Operators:\n");
    printf("%d > %d is %s\n", a, b, a > b ? "true" : "false");
    printf("%d >= %d is %s\n", a, b, a >= b ? "true" : "false");
    printf("%d < %d is %s\n", a, b, a < b ? "true" : "false");
    printf("%d <= %d is %s\n", a, b, a <= b ? "true" : "false");
    printf("%d == %d is %s\n", a, b, a == b ? "true" : "false");
    printf("%d != %d is %s\n", a, b, a != b ? "true" : "false");
    
    // Logical Operators
    int x = 1, y = 0;
    printf("Logical Operators:\n");
    printf("x && y is %d\n", x && y);
    printf("x || y is %d\n", x || y);
    printf("!x is %d\n", !x);
    printf("!y is %d\n", !y);
    
    // Assignment Operators
    printf("Assignment Operators:\n");
    result = a + b;
    printf("result = a + b => result = %d\n", result);
    result -= a;
    printf("result -= a => result = %d\n", result);
    result *= b;
    printf("result *= b => result = %d\n", result);
    result /= a;
    printf("result /= a => result = %d\n", result);
    result %= b;
    printf("result %%= b => result = %d\n", result);
    
    // Bitwise Operators
    unsigned int num1 = 60; // 00111100 in binary
    unsigned int num2 = 13; // 00001101 in binary
    printf("Bitwise Operators:\n");
    printf("num1 & num2 = %d\n", num1 & num2); // Bitwise AND
    printf("num1 | num2 = %d\n", num1 | num2); // Bitwise OR
    printf("num1 ^ num2 = %d\n", num1 ^ num2); // Bitwise XOR
    printf("~num1 = %d\n", ~num1); // Bitwise NOT
    printf("num1 << 2 = %d\n", num1 << 2); // Left shift
    printf("num1 >> 2 = %d\n", num1 >> 2); // Right shift
    
    return 0;
}

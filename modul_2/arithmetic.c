#include <stdio.h>

int main() {
    int a=10;
    int b=2;
    int sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);
    int sub = a - b;
    printf("Subtraction of %d and %d is %d\n", a, b, sub);
    int mul = a * b;
    printf("Multiplication of %d and %d is %d\n", a, b, mul);
    int div = a / b;
    printf("Division of %d and %d is %d\n", a, b, div);

    return 0;
}
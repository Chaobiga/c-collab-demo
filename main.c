#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("=== C Language Calculator ===\n");
    
    // Operations placeholders (subtraction logic)
    int a, b;
    printf("Enter two integers for subtraction (a - b): ");
    scanf("%d %d", &a, &b);

    int result = a - b;
    printf("Result of %d - %d = %d\n", a, b, result);

    // Operations placeholders
    printf("System Check OK.\n");

    int result = add(5, 3);
    printf("Addition Result: %d\n", result);
    return 0;
}

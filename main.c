#include <stdio.h>

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
    return 0;
}

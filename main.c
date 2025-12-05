#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("=== C Language Calculator ===\n");

    // Operations placeholders
    printf("System Check OK.\n");

    int result = add(5, 3);
    printf("Addition Result: %d\n", result);
    return 0;
}

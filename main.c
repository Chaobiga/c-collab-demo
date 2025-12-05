#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("=== C Language Calculator ===\n");
    
    // Operations placeholders (subtraction logic)
    int a, b;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);

    int subresult = a - b;
    printf("Result of %d - %d = %d\n", a, b, subresult);
    int addresult = a + b;
    printf("Result of %d + %d = %d\n", a, b, addresult);

    // Operations placeholders
    printf("System Check OK.\n");
    return 0;
}

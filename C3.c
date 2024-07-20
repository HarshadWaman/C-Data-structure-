#include <stdio.h>

void arithmeticOperations(int a, int b) {
    int sum, diff, prod, quotient, remainder;
    int *ptr_a = &a;
    int *ptr_b = &b;

    
    sum = *ptr_a + *ptr_b;
    printf("Sum: %d\n", sum);

    
    diff = *ptr_a - *ptr_b;
    printf("Difference: %d\n", diff);

    
    prod = *ptr_a * *ptr_b;
    printf("Product: %d\n", prod);

    
    if (*ptr_b != 0) {
        quotient = *ptr_a / *ptr_b;
        printf("Quotient: %d\n", quotient);
    } else {
        printf("Division by zero error!\n");
    }

    
    if (*ptr_b != 0) {
        remainder = *ptr_a % *ptr_b;
        printf("Remainder: %d\n", remainder);
    } else {
        printf("Modulus by zero error!\n");
    }
}

int main() {
    int num1, num2;
    
    printf("Enter num one: ");
  scanf("%d"&num1);
    printf("Enter num two");
  scanf("%d"&num2);
    
    arithmeticOperations(num1, num2);
    
    return 0;
}

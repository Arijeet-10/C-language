#include <stdio.h>

int main() {
    float num, result;
    int int_part;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    int_part = (int)num;

    result = int_part + (num - int_part) + 0.1;

    printf("The new number is: %.1f\n", result);

    return 0;
}

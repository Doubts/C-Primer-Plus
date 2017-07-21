/* print_flaot.c -- read float and print diferrent style */

#include <stdio.h>

int main(void) {
    printf("Enter a floating-point value: ");
    float val;
    scanf("%f", &val);
    printf("fixed-point notation: %f\n", val);
    printf("exponential notation: %e\n", val);
    printf("p notation: %a\n", val);

    return 0;
}

/* bases.c -- print decimal int 100 as decimal, octal, hexadecimal */

#include <stdio.h>

int main(void) {
    int x = 100;

    printf("decimal = %d, octal = %o, hexadecimal = %x(%X)\n", x, x, x, x);
    printf("print with prefix, dicimal = %d, octal = %#o, hexadecimal = %#x\n", x, x, x);

    return 0;
}

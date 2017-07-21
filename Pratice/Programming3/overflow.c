// overflow.c -- 查看整数溢出，浮点数溢出

#include <stdio.h>

int main(void) {
    printf("The int size: %lu bytes.\n", sizeof(int));

    int i = 2147483647 + 1;
    printf("%d. \n", i);

    return 0;
}

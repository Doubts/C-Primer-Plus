// print_ascii.c -- 提示输入一个ASCII码值，并输出

#include <stdio.h>

int main(void) {
    printf("Please enter a ascii value(0-127): ");
    int val;
    scanf("%d", &val);
    printf("The ASCII value: %c\n", val);

    return 0;
}

// print_float.c -- 输入浮点数,以不同格式输出

#include <stdio.h>

int main(void) {
    printf("please enter a float: \n");

    float value;
    scanf("%f", &value);

    printf("print with point: %.1f", value);
    printf("print with scientific notation: %.1e", value);

    return 0;
}

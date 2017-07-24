// print_height.c -- 输出身高

#include <stdio.h>

int main(void) {
    int height;
    char name[40];
    scanf("%s %d", name, &height);

    float h = height / 100.0;

    printf("%s You are %.2f meters tall.\n", name, h);

    return 0;
}

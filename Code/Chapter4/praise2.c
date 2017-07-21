// praise2.c

#include <stdio.h>
#include <string.h> // 提供strlen()函数原型

#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's you name? ");
    scanf("%s", name);
    printf("Hello, %s, %s", name, PRAISE);

    printf("Your name of %lu letters occupies %lu memory bytes", strlen(name), sizeof name);

    return 0;
}

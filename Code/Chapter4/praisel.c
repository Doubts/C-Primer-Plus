// praisel.c -- 使用不同类型的字符串

#include <stdio.h>

#define PRAISEL "You are an extraordinary being."

int main(void) {
    char name[40];
    
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s", name, PRAISEL);

    return 0;
}

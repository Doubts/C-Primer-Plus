// cypher2.c -- 替换输入的字符，非字母字符保持不变

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    while((ch = getchar()) != '\n') {
        if(isalpha(ch)) {
            putchar(ch + 1);
        } else {
            putchar(ch);
        }
    }
    return 0;
}
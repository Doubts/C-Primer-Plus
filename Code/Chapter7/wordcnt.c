// wordcnt.c -- 统计字符数、单词数、行数

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void) {
    char c;
    char prev;
    long n_chars = 0;
    long n_lines = 0;
    long n_words = 0;
    int p_lines = 0; //不完整的行数
    bool inword = false;  // 如果c在单词中，为true

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++;

        if (c == '\n')
            n_lines++;

        if (!isspace(c) && inword) {
            inword = true;
            n_words++;
        }

        if (isspace(c) && inword) {
            inword = false;
        }
        prev = c;
    }

    if (prev != '\n') {
        p_lines = 1;
    }

    printf("Characters = %ld, words = %ld, lines = %ld\n", n_chars, n_words, n_lines);
    printf("patitial lines = %d\n", p_lines);

    return 0;
}


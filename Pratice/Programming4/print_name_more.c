// print_name_more.c -- 输入姓名 输出更多

#include <stdio.h>
#include <string.h>
int main(void) {
    char first_name[40];
    char last_name[40];

    printf("please enter you name\n");

    scanf("%s %s", first_name, last_name);

    printf("\"%s,%s\"\n", first_name, last_name);
    printf("\"%20s,%20s\"\n", first_name, last_name);
    printf("\"%-20s,%-20s\"\n", first_name, last_name);

    int first_width = strlen(first_name) + 3;
    int last_width = strlen(last_name) + 3;
    printf("\"    %s,   %s\"\n", first_name, last_name);

    return 0;
}

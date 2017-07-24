// print_name_with_len.c -- 输出名字和姓 以及长度 格式化对齐

#include <stdio.h>
#include <string.h>

int main(void) {
    char first_name[40];
    char last_name[40];

    printf("Enter your first name:");
    scanf("%s", first_name);
    printf("Enter your last name:");
    scanf("%s", last_name);

    int len_first = strlen(first_name);
    int len_last = strlen(last_name);

    printf("%-10s %-10s\n", first_name, last_name);
    printf("%-10d %-10d\n", len_first, len_last);

    printf("%10s %10s\n", first_name, last_name);
    printf("%10d %10d\n", len_first, len_last);


    return 0;
}

// print_name -- 输入输出姓名

#include <stdio.h>

int main(void) {
    char *first_name[40];
    char *last_name[40];

    scanf("%s %s", first_name, last_name);

    printf("%s,%s\n", last_name, first_name);

    return 0;
}

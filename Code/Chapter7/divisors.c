// divisors.c -- 使用嵌套显示一个书的约数

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Enter an integer for annalysis: \n");
    printf("Enter a q to quit\n");

    while((scanf("%lu", &num) == 1)) {
            for (div = 2, isPrime = true; (div * div) <= num; div++) {
                if (num % div == 0) {
                    if (div * div != num) {
                        printf("%lu is divisible by %lu and %lu.\n",
                                num, div, num / div);
                        }
                    else {
                        printf("%lu is divisible by %lu.\n", num, div);
                        }
                    isPrime = false;
                    }
           }
           if(isPrime) {
               printf("%lu is prime", num);
            }

            printf("Enter another integer for analysis.\n");
            printf("Enter a q to quit.\n");
            }
            printf("Bye.\n");
            return 0;
            }

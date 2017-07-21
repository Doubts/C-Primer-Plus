/* age_to_seconds.c -- your age to seconds */

#include <stdio.h>

int main(void) {
    float yearOfSeconds = 3.156e7;
    printf("You age is: ");
    float age;
    scanf("%f", &age);
    float ageOfSeconds = age * yearOfSeconds;
    printf("Your age of seconds is %f", ageOfSeconds);

    return 0;
}

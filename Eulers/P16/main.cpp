#include <iostream>
#include <stdio.h>
#include "../include/big_int.h"

int main(void)
{
    big_int a = bi_init("1");
    big_int two = bi_init("2");
    int i = 0;
    for(i = 0; i < DIGITS; i++) {
        a = bi_mult(a, two);
    }
    printf("2**1000: %s\n", bi_get(a));

    int sum = 0;
    for (i = 0; i < DIGITS; i++) {
        if (a.number[i] == EON) {
            break;
        }
        sum += a.number[i];
    }
    printf("Sum of digits: %d\n", sum);
}

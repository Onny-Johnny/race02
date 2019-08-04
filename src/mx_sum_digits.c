#include "minilibmx.h"

int mx_sum_digits(int num) {
    int sum = 0;
    num = num < 0 ?  -num : num;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

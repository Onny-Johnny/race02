#include "minilibmx.h"

double mx_pow_rec(double n, unsigned int pow) {
    if(pow == 0)
        return 1;
    if(n > 0) {
        if(pow == 1) {
            return n;
        }
        else
            return (n * mx_pow_rec(n, pow - 1));
    }
    return 0;
}

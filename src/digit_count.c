#include "minilibmx.h"

int digit_count(int n){
    return n ? 1 + digit_count(n/10) : 0;
}

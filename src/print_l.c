#include "minilibmx.h"

void print_l(int ar1, char op, int ar2, int res) {
    mx_printint(ar1); mx_printchar(' '); mx_printchar(op);
    mx_printchar(' '); mx_printint(ar2); mx_printchar(' ');
    mx_printchar('='); mx_printchar(' '); mx_printint(res);
    mx_printchar('\n');
}

#include "minilibmx.h"

void selector(char *c1, char *op, char *c2, char *res)
{
    switch (*op)
    {
    case '+': mx_plus(c1, c2, res);
        
        break;

    case '-': mx_minus(c1, c2, res);
        
        break;

    case '*': mx_multi(c1, c2, res);
        
        break;

    case '/': mx_div(c1, c2, res);
        
        break;
    
    }
}


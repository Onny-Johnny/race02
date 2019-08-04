#include "minilibmx.h"

char *mx_strnew(const int size) {
    char *p;
    char *str = (char *)malloc(sizeof(char) * (size + 1));
    if (str == NULL)
        return NULL;
    p = str;
    for (int i = 0; i < size; i++)
        *p++ = '\0';
    *p = '\0';
    return str;
}

#include "minilibmx.h"

bool validation(char *arg, int i) {
    for (int j = 0; j < mx_strlen(arg); j++) {
        if (i == 2) {
            if (mx_strlen(arg) != 1) return 0;
            if (arg[j] != '?' && arg[j] != '-' && arg[j] != '+' && arg[j] != '*' && arg[j] != '/')
                return 0;
        }
        else {
            if (arg[j] == '?' || mx_isdigit(arg[j]))
                continue;
            else return 0;
        }
    }
    return 1;
}

bool is_zero(char *str) {
    for(int i = 0; i < mx_strlen(str); i++) {
        if (str[i] != '0') 
            return 1;
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    int s = 0;
    for (int i = 1; i < argc; i++)
        s += mx_strlen(argv[i - 1]);
    char *error = mx_strnew(s);
    if (argc == 5) {
        char *arg1 = mx_strtrim(argv[1]);
        char *arg2 = mx_strtrim(argv[2]);
        char *arg3 = mx_strtrim(argv[3]);
        char *arg4 = mx_strtrim(argv[4]);


        for (int i = 0; i < argc; i++) {
            if (!validation(arg1, 1)) {
                write(2, "Invalid operation:", 18);
                write(2, " ", 1);
                write(2, argv[1], mx_strlen(argv[1]));
                mx_printchar('\n');
                return 0;
            }
            if (!validation(arg2, 2)) {
                write(2, "Invalid operation:", 18);
                write(2, " ", 1);
                write(2, argv[2], mx_strlen(argv[2]));
                mx_printchar('\n');
                return 0;
            }
            if (!validation(arg3, 3)) {
                write(2, "Invalid operation:", 18);
                write(2, " ", 1);
                write(2, argv[3], mx_strlen(argv[3]));
                mx_printchar('\n');
                return 0;
            }
            if (!validation(arg4, 4)) {
                write(2, "Invalid operation:", 18);
                write(2, " ", 1);
                write(2, argv[4], mx_strlen(argv[4]));
                mx_printchar('\n');
                return 0;
            }
        }
        selector(arg1, arg2, arg3, arg4);
    }
    else {
        mx_strcat(error, "usage:");
        mx_strcat(error, " ");
        for (int i = 0; i < argc; ++i) {
            mx_strcat(error, argv[i]);
            if (i + 1 != argc)
                mx_strcat(error, " ");
        }
        write(2, error, mx_strlen(error));
        mx_printchar('\n');
    }
    return 0;
}

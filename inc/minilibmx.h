
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdio.h>

char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
bool check(char *s);
int digit_count(int n);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_strdel(char **str);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_div(char *s1, char *s2, char *res);
void mx_minus(char *s1, char *s2, char *res);
void mx_multi(char *s1, char *s2, char *res);
void mx_plus(char *s1, char *s2, char *res);
double mx_pow_rec(double n, unsigned int pow);
char *mx_strcat(char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_sum_digits(int num);
void print_l(int ar1, char op, int ar2, int res);
void selector(char *c1, char *op, char *c2, char *res);

#endif

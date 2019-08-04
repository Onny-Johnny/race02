int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    char *link = s1;
    link += mx_strlen(s1);
    while (*s2) {
        *link++ = *s2++;
    }
    *link = '\0';
    return (char *) s1;
}

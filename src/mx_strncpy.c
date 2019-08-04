char *mx_strncpy(char *dst, const char *src, int len) {
    char *to = dst;
    while(*src && len--)
        *to++ = *src++;
    if(*src == '\0')
        *to = '\0';
    return (char *) dst;
}

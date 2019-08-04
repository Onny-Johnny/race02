#include "minilibmx.h"

char *mx_strcpy(char *dst, const char *src) {
	while (*src)
	{	*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (dst);
}

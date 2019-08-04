#include "minilibmx.h"

bool mx_isspace(char c) {
	if ((c == '\t') || (c == ' ') || (c == '\r') 
		|| (c == '\n') || (c == '\f') || (c == '\v'))
		return(1);
	else
		return(0);
}

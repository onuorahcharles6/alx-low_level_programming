#include "main.h"


char *_strncpy(char *dest, char *src, int n) 
{
    char *p = dest;
    n = 0;
    int i;
    while (i < n && *src != '\0') {
        *p++ = *src++;
        i++;
    }
    while (i < n) {
        *p++ = '\0';
        i++;
    }
    return dest;
}

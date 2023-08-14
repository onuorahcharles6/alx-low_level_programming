#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char* p = dest;
    while (*p != '\0') {
        p++;
    }
    while (n > 0 && *src != '\0') {
        *p++ = *src++;
        n--;
    }
    *p = '\0';
    return dest;
}

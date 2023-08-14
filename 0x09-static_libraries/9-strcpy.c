#include "main.h"

char *_strcpy(char *dest, char *src) 
{
    char *p = dest;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

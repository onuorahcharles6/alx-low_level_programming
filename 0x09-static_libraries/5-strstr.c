#include "main.h"

char *_strstr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    if (*s == c) {
        return s;
    }
    return '\0';
}

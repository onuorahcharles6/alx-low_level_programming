#include <stdio.h>
#include "main.h"

void _puts(char *s)
{
    int count = 0;
    while (*s != '\0') {
        if (putchar(*s++) == EOF) {

        }
        count++;
    }
    if (putchar('\n') == EOF) {

    }
    count++;
}

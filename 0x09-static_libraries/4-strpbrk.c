#include "main.h"

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        
	    char *a;

	    for (a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                return s;
            }
        }
        s++;
    }

    return ('\0');
}

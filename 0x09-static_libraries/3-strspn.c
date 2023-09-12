#include "main.h"

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found = 0;
    char *a;

    while (*s != '\0') {
        found = 0;
	
        for (a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            return (count);
        }

        count++;
        s++;
    }

    return (count);
}

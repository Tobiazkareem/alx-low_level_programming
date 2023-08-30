#include "main.h"

/**
 * set_string - set string
 * @s: value of the pointer s
 * @to: pointer to to
 *
 */

void set_string(char **s, char *to)
{
	/* set pointer value s to point to same location as to */
	*s = to;
}

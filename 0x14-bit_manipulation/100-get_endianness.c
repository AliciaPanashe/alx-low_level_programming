#include "main.h"

/**
 * Function that checks the endianness.
 *
 * Return 0 if big endian, if little endian return 1 
 */
int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}

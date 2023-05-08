#include "main.h"

/**
 * get_endianness - will used to check endianness
 * Return:that will get 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int test;

	test = 1;
	if (*(char *)&test == 1)
		return (1);
	else
		return (0);
}


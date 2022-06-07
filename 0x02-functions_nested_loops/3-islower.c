#include "main.h"

/**
*_islower - checks if the character c is in lower character
*
*Return - 1 c in lowercase
*Return - 0 c is not in lowercase
*Return - 0 (Success)
*/

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);

	return (0);
}

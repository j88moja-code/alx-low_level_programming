#include "main.h"

/**
 *_isalpha -checks for alphabetic characters
 *
 * Return - 0 (Success)
 * c -character c being checked
 * Return - 1 if c is a letter, lowercase or uppercase
 * Return - 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <= 122))
		return (1);
	return (0);
}

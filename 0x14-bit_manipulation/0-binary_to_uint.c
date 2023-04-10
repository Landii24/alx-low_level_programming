#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if b is NULL or not a valid binary string
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
const char *p = b;

if (b == NULL)
return (0);

while (*p)
{
if (*p != '0' && *p != '1')
return (0);

result <<= 1;
result += (*p - '0');
p++;
}

return (result);
}

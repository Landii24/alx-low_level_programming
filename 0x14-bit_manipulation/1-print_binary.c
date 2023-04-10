#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << 63;

while (mask > 0)
{
if (n & mask)
putchar('1');
else
putchar('0');

mask >>= 1;
}
}

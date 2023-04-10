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
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}

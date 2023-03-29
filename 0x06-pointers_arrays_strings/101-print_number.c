#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: integer to print
 */
void print_number(int n)
{
  int divisor = 1, digit, negative = 0;

  if (n < 0) {
    _putchar('-');
    negative = 1;
  }

  while (n / divisor > 9 || n / divisor < -9) {
    divisor *= 10;
  }

  while (divisor != 0) {
    digit = (n / divisor) % 10;
    if (digit < 0) {
      digit *= -1;
    }
    _putchar(digit + '0');
    divisor /= 10;
  }

  if (negative == 1 && n > 0) {
    _putchar('0');
  }
}

#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result, or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, len, i, j, k = 0, carry = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	len = len1 > len2 ? len1 : len2;
	if (len + 1 > size_r)
		return (0);
	r[len + 1] = '\0';
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		int a = i >= 0 ? n1[i] - '0' : 0;
		int b = j >= 0 ? n2[j] - '0' : 0;
		int sum = a + b + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[len--] = sum + '0';
	}
	if (carry)
	{
		if (len + 1 > size_r)
			return (0);
		r[len--] = '1';
	}
	if (len + 1 > size_r)
		return (0);
	while (len >= 0)
		r[len--] = '0';
	return (r);
}

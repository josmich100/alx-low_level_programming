#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in @array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 *
 * Description: Prints a message for each comparison made in the array.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return i;
    }

    return -1;  /* Value not found */
}

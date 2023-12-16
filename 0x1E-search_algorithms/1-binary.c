#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in @array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 *
 * Description: Prints the array being searched every time it changes.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i, low, high;

    if (array == NULL)
        return (-1);

    for (low = 0, high = size - 1; high >= low;)
    {
        printf("Searching in array: ");
        for (i = low; i < high; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = low + (high - low) / 2;
        if (array[i] == value)
            return (i);
        if (array[i] > value)
            high = i - 1;
        else
            low = i + 1;
    }

    return (-1);
}

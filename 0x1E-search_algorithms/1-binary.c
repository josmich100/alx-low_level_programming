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
    size_t left, right, mid;

    if (array == NULL)
        return -1;

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (mid = left; mid < right; mid++)
            printf("%d, ", array[mid]);
        printf("%d\n", array[mid]);

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  /* Value not found */
}

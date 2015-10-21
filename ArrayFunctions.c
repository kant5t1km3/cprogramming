/* Filename: ArrayFunctions.c
 * Purpose: Holds multiple custom array functions for C Programming.
 * Use: In working file, use #include "ArrayFunctions.c".
 */

/* Function: MaxPos
 * Purpose: Calculate the maximum value within an array.
 * Parameters: Array holding max value, length of array.
 * Output: Returns maximum value in array.
 */
int MaxPos(int a[], int length)
{
    int i, max;

    max = a[0];

    for (i = 0; i < length; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

/* Function: SwapElements
 * Purpose: Swap any two given elements in an array.
 * Parameters: Array holding elements to be swapped, index of swapee 1, index of swapee 2.
 * Output: Returns void.
 */
void SwapElements(int a[], int index1, int index2)
{
    int temp = a[index1];
    a[index1] = a[index2];
    a[index2] = temp;
}

/* Function: BinarySearch
 * Purpose: Perform a binary search on an array with a given search key.
 * Parameters: Array to be searched, length of array, search key to find.
 * Output: Returns position. pos=-1 if key not found.
 */
int BinarySearch(int a[], int length, int key)
{
    int pos=-1, low=0, mid=0, high=length-1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            pos = mid;
            return pos;
        }
        if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return pos;
}

/* Function: SelectionSort
 * Purpose: Sort elements in an array by ascending order.
 * Parameters: Array to be sorted, length of array.
 * Output: Returns void.
 */
void SelectionSort(int a[], int length)
{
    int i, j, pos, swap;

    for (i = 0; i < length; i++)
    {
        pos = i;

        for (j = i + 1; j < length; j++)
        {
            if (a[pos] > a[j])
                pos = j;
        }
        if (pos != i)
        {
            swap = a[i];
            a[i] = a[pos];
            a[pos] = swap;
        }
    }
}

/* Function: PrintArray
 * Purpose: Print all elements within an array.
 * Parameters: Array to be printed, length of array.
 * Output: Returns void.
 */
void PrintArray(int a[], int length)
{
    int i;

    for (i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}

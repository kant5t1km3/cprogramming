#include <stdio.h>
#include "ArrayFunctions.c"

/* Filename: ArrayFunctionsTest.c
 * Programmer: Zach Blankinship
 * Purpose: This program tests various custom array functions, held in ArrayFunctions.c.
 */

int main(void)
{
    int testArray[] = {0, 1, 7, 3, 4};

    // Test print array function.
    printf("The given array is: ");
    PrintArray(testArray, 5);

    // Test max position function.
    printf("\nThe max element of array is: %d", MaxPos(testArray, 5));

    // Test swap elements function.
    SwapElements(testArray, 1, 3);
    printf("\nArray after SwapElements: ");
    PrintArray(testArray, 5);

    // Test selection sort function.
    SelectionSort(testArray, 5);
    printf("\nArray after SelectionSort: ");
    PrintArray(testArray, 5);

    // Test binary search function.
    printf("\nBin search for key: 4, pos=%d", BinarySearch(testArray, 5, 4));
    printf("\nBin search for key: 100, pos=%d", BinarySearch(testArray, 5, 100));

    return 0;
}

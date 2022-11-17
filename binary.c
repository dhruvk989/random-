#include <stdio.h>
#include <stdlib.h>
int binary(int arr[], int element, int size)

{
    int low, mid, high;
    low = 0;
    high = size - 1;


    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            /* code */
        }
    }
    return -1;
}
int main()
{
    int arr[] = {22, 33, 44, 55, 66};
    int size = sizeof(arr) / sizeof(int);
    int element = 44;
    int search = binary(arr, element, size);
    printf("%d", search);
    return 0;
}


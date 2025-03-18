#include <stdio.h>

int main()
{
    int arr[] = {3, 5, 2, 10, 4, 0};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int minVal = arr[0];

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    printf("The minimum value in the array is: %d\n", minVal);

    return 0;
}
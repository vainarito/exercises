#include <stdio.h>

void bubbleSort(int *arr, int size);

int main(void)
{
    int arr[] = {4, 2, 1, 5, 3, 8, 6, 9, 7, 0};
    int size = 10;
    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }

    bubbleSort(arr, size);

    printf("\nArray after sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }
    return 0;
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

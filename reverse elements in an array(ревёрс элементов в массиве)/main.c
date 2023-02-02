#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sizeArr()
{
    int size = 0;
    while (!scanf("%d", &size) || getchar() != '\n')
    {
        printf("Error!\nInvalid input, please try again:");
        rewind(stdin);
    }
    return size;
}

void reverse(int *array, int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void printArr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%4d", array[i]);
    }
}
int main()
{
    int *arr = NULL;
    printf("Enter the size of the array:");
    int size = 0;
    size = sizeArr();
    arr = calloc(size, sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 200 - 100;
    }

    printf("Array:\n");
    printArr(arr, size);

    reverse(arr, size);

    printf("\nArray after reverse:\n");
    printArr(arr, size);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int enterArr();
int *copyArr(int *arr, int size);

int main(void)
{
    int *arr = NULL;
    printf("Please enter the number of elements in the array:");
    int size = enterArr();
    arr = calloc(size, sizeof(int));

    printf("Please define array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("[%d]=", i + 1);
        arr[i] = enterArr();
    }

    system("CLS");
    printf("Array \"Arr\":\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }

    int *copyOfArrayArr = copyArr(arr, size);
    printf("\nСopy of array \"Arr\":\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", copyOfArrayArr[i]);
    }
    return 0;
}

int enterArr()
{
    int size = 0;
    while (!(scanf("%d", &size) || getchar() != '\n'))
    {
        printf("Error!\nPlease try again:");
        rewind(stdin);
    }
    return size;
}
int *copyArr(int *arr, int size)
{
    int *s = calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        s[i] = arr[i];
    }
    return s;
}

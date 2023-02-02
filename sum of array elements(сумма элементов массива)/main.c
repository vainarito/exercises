#include <stdio.h>
#include <stdlib.h>

int inputOfVariables()
{
    int size = 0;
    while (!scanf("%d", &size) || getchar() != '\n')
    {
        printf("Error!\nTry again:");
        rewind(stdin);
    }
    return size;
}
void elemArr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("[%d]=", i + 1);
        array[i] = inputOfVariables();
    }
}
void sumElem(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    printf("Sum of elements: %d", sum);
}

int main()
{
    int *arr = NULL;
    printf("Enter the number of elements:");
    int size = inputOfVariables();
    arr = calloc(size, sizeof(int));
    elemArr(arr, size);
    sumElem(arr, size);
}

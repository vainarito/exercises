#include <stdio.h>
#include <stdlib.h>

void function(int *arr, int size)
{
    int element = 0, flag = 0;

    printf("\nEnter the number to be checked:");
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
            flag++;
    }
    printf("Element %d occurs in the array %d times!\n", element, flag);
}

int main()
{

    int *arr = NULL;
    int size = 0;

    printf("Enter the size of the array:");
    while (!scanf("%d", &size) || getchar() != '\n')
    {
        printf("Error!\nEnter the size of the array:");
        rewind(stdin);
    }
    arr = calloc(size, sizeof(int));

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("[%d]=", i + 1);
        while (!scanf("%d", &arr[i]) || getchar() != '\n')
        {
            printf("Error!\n[%d]=", i + 1);
            rewind(stdin);
        }
    }

    printf("Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }

    function(arr, size);
    return 0;
}

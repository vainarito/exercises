#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sizeArr()
{
    int flag = 0;
    printf("Enter the number of elements in the array:");
    while (!scanf("%d", &flag) || getchar() != '\n')
    {
        printf("Error!\nEnter the number of elements in the array:");
        rewind(stdin);
    }
    return flag;
}

void randomElement(int *array, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 200 - 100;
    }
}

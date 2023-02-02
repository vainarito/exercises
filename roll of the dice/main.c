#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rollSize();

int main(void)
{
    srand(time(NULL));

    int roll = 0;
    printf("Please enter the number of cubes:");
    int dice = rollSize();

    for (int i = 0; i < dice; i++)
    {
        roll = rand() % 6 + 1;
        printf("Dice %d: %d\n", i + 1, roll);
    }
    return 0;
}

int rollSize()
{
    int size = 0;
    while (!scanf("%d", &size) || getchar() != '\n')
    {
        printf("Error!\nTry again:");
        rewind(stdin);
    }
    return size;
}

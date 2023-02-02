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

int main()
{
    printf("Enter the number of elements:");
    int size = inputOfVariables(), f1 = 0, f2 = 1, fib = 0;
    for (int i = 2; i < size; i++)
    {
        fib = f1 + f2;
        f1 = f2;
        f2 = fib;
    }
    printf("Fibonachi:%d", fib);
    return 0;
}

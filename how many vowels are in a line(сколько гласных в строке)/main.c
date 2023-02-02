#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char enterString(char *array)
{
    int i = 0;
    while (array[i] != '\n')
    {
        i++;
        array = realloc(array, (i) * sizeof(char));
        array[i] = getchar();
        array[i + 1] = '\0';
    }
}

int function(char *array)
{
    int size = strlen(array);
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        switch (toupper(array[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            flag++;
        }
    }
    return flag;
}

int main()
{
    char *arr = NULL;
    arr = calloc(1, sizeof(char));
    enterString(arr);
    int count = function(arr);
    printf("Vowels in an array: %d", count);
    return 0;
}

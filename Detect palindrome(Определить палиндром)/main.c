#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *array)
{
    int middle = strlen(array) / 2;
    int len = strlen(array);

    for (int i = 0; i < middle; i++)
        if (array[i] != array[len - i - 1])
            return false;

    return true;
}

int main()
{
    char *arr = NULL;
    int i = 0;
    printf("Enter the string:\n");
    arr = (char *)calloc(1, sizeof(char));
    while (arr[i] != '\n')
    {
        i++;
        arr = (char *)realloc(arr, (i) * sizeof(char));
        arr[i] = getchar();
        arr[i + 1] = '\0';
    }
    if (is_palindrome(arr))
        printf("%s- is a palindrome!", arr);
    else
        printf("%s- is not a palindrome!", arr);
    return 0;
}

#include <stdio.h>

int non_repeating(int *arr, int n);

int main(void)
{
    int s[] = {1, 2, 3, 3, 5, 1, 7, 8, 4, 9, 9};
    printf("Array:\n");
    for (int i = 0; i < 11; i++)
        printf("%4d", s[i]);
    int variable = non_repeating(s, 11);
    printf("\nThe number of elements that are not repeated: %d", variable);

    return 0;
}

int non_repeating(int *arr, int n)
{
    int i = 0, j = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
                break;
        }
        if (j == n)
            count++;
    }
    return count;
}

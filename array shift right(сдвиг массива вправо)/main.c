#include <stdio.h>

void right_shift(int *arr, int size);
void repeat_right_shift(int *arr, int size, int n);

int main(void)
{
    int n = 0;
    int s1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Initial array:\n");
    for (int i = 0; i < 10; i++)
        printf("%4d", s1[i]);
    printf("\nEnter how many times you want to shift the array to the right:");
    scanf("%d", &n);
    repeat_right_shift(s1, 10, n);
    printf("Modified array:\n");
    for (int i = 0; i < 10; i++)
        printf("%4d", s1[i]);
    return 0;
}

void right_shift(int *arr, int size)
{
    int temp = arr[size - 1];
    for (int i = (size - 2); i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
}
void repeat_right_shift(int *arr, int size, int n)
{
    for (int i = 0; i < n; i++)
        right_shift(arr, size);
}

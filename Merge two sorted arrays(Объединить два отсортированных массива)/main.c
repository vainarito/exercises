#include <stdio.h>

void merge(int *arr1, int n1, int *arr2, int n2, int *arr3);

int main(void)
{
    int s1[] = {1, 3, 5, 7, 9};
    int s2[] = {2, 4, 6, 8, 10};
    int s3[10];

    printf("Array №1:\n");
    for (int i = 0; i < 5; i++)
        printf("%4d", s1[i]);

    printf("\nArray №2:\n");
    for (int i = 0; i < 5; i++)
        printf("%4d", s2[i]);

    merge(s1, 5, s2, 5, s3);

    printf("\nArray №3:\n");
    for (int i = 0; i < 10; i++)
        printf("%4d", s3[i]);

    return 0;
}

void merge(int *arr1, int n1, int *arr2, int n2, int *arr3)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    while (i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

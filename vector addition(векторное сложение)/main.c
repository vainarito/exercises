#include <stdio.h>

void vector_add(float v1[],
                float v2[],
                float result[],
                int length);

int main(void)
{
    float v1[] = {2, 5, 4};
    float v2[] = {3, 2, 1};
    float result[] = {0, 0, 0};

    vector_add(v1, v2, result, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("Result[%d]=%f\n", i, result[i]);
    }
}

void vector_add(float v1[],
                float v2[],
                float result[],
                int length)
{
    for (int i = 0; i < length; i++)
    {
        result[i] = v1[i] + v2[i];
    }
}

#include <stdio.h>

float dotVector(float *v1, float *v2);
float enterElement();
void enterVector(float *v1, float *v2, int flag);

int main(void)
{
    float flag = 0, sum = 0;
    float v1[3] = {0, 0, 0};
    float v2[3] = {0, 0, 0};
    printf("Enter (x, y, z), for vector \"v1\":\n");
    enterVector(v1, v2, flag);
    flag++;
    printf("\nEnter (x, y, z), for vector \"v2\":\n");
    enterVector(v1, v2, flag);
    sum = dotVector(v1, v2);
    printf("Dot product of vectors: %.2f\n", sum);
    return 0;
}

float dotVector(float *v1, float *v2)
{
    float sum = 0;
    for (int i = 0; i <= 3; i++)
        sum = sum + (v1[i] * v2[i]);
    return sum;
}

float enterElement()
{
    float el = 0;
    while (!(scanf("%f", &el) || getchar() != '\n'))
    {
        printf("Error!\nError try again!");
        rewind(stdin);
    }
    return el;
}

void enterVector(float *v1, float *v2, int flag)
{
    if (flag == 0)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (i == 1)
            {
                printf("Enter x: ");
                v1[i] = enterElement();
            }
            else if (i == 2)
            {
                printf("Enter y: ");
                v1[i] = enterElement();
            }
            else if (i == 3)
            {
                printf("Enter z: ");
                v1[i] = enterElement();
            }
        }
        system("CLS");
    }
    else if (flag == 1)
    {
        for (int i = 1; i <= 3; i++)
        {
            if (i == 1)
            {
                printf("Enter x: ");
                v2[i] = enterElement();
            }
            else if (i == 2)
            {
                printf("Enter y: ");
                v2[i] = enterElement();
            }
            else if (i == 3)
            {
                printf("Enter z: ");
                v2[i] = enterElement();
            }
        }
        system("CLS");
    }
    printf("Vector \"v1\"-{%.2f, %.2f, %.2f}\n", v1[1], v1[2], v1[3]);
    printf("Vector \"v2\"-{%.2f, %.2f, %.2f}\n", v2[1], v2[2], v2[3]);
}

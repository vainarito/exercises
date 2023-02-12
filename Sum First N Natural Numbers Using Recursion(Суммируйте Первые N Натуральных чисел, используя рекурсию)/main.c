#include <stdio.h>

int sum(int n);

int main(void)
{
    int n = 0;
    printf("Enter the sum of how many elements you want to find:");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n > 0)
        return n + sum(n - 1);
    else
        return 0;
}

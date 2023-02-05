#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);
int enterYear();

int main(void)
{
    printf("Please enter a year:");
    int year = enterYear();
    if (is_leap_year(year))
        printf("%d is a leep year!\n", year);
    else
        printf("%d is not a leap year!\n", year);
    return 0;
}

bool is_leap_year(int year)
{
    if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}
int enterYear()
{
    int flag = 0;
    while (!scanf("%d", &flag) || getchar() != '\n')
    {
        printf("Error!\nTry again:");
        rewind(stdin);
    }
    return flag;
}

#include <stdio.h>

void trim(char *s);

int main(void)
{
    char str[] = " \n\n\t   This is the way!";
    printf("Before: %s", str);
    trim(str);
    printf("\nAfter: %s", str);
    return 0;
}

void trim(char *s)
{
    int count = 0;
    while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t')
        count++;

    if (count != 0)
    {
        int i = 0;
        while (s[i + count] != '\0')
        {
            s[i] = s[i + count];
            i++;
        }
    }
}

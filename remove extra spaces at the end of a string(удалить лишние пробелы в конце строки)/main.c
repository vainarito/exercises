#include <stdio.h>
#include <string.h>

void trim(char *s);

int main(void)
{
    char str[] = "This is the way! \n\n\t  ";
    printf("Before: %s", str);
    trim(str);
    printf("\nAfter: %s", str);
    return 0;
}

void trim(char *s)
{
    int i = strlen(s) - 1;
    while (i > 0)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            i--;
        else
            break;
    }
    s[i + 1] = '\0';
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_append(char *s1, char *s2);

int main(void)
{
    char s1[] = "HELLO ";
    printf("String 1: %s\n", s1);
    char s2[] = "WORLD!";
    printf("String 2: %s\n", s2);
    char *s = string_append(s1, s2);
    printf("Line 1 + 2: %s\n", s);
    return 0;
}

char *string_append(char *s1, char *s2)
{
    int s1_size = strlen(s1);
    int s2_size = strlen(s2);
    int size = s1_size + s2_size + 1;

    char *s = calloc(size, sizeof(char));

    for (int i = 0; i < s1_size; i++)
    {
        s[i] = s1[i];
    }

    for (int i = 0; i < s2_size; i++)
    {
        s[s1_size + i] = s2[i];
    }
    s[size - 1] = '\0';
    return s;
}

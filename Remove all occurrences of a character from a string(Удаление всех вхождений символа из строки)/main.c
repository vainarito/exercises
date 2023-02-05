#include <stdio.h>

void remove_char(char *string, char r);

int main(void)
{
    char s1[] = "strRRRRing R";
    printf("s1 before: %s\n", s1);
    remove_char(s1, 'R');
    printf("s1 after: %s\n", s1);
    return 0;
}

void remove_char(char *string, char r)
{
    int pos = 0;
    while (string[pos] != '\0')
    {
        if (string[pos] == r)
        {
            int newpos = pos;
            while (string[newpos] != '\0')
            {
                string[newpos] = string[newpos + 1];
                newpos++;
            }
        }
        else
            pos++;
    }
}

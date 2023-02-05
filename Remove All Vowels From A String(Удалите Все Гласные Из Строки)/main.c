#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "This is the way.";
    int curpos = 0;
    int newpos = 0;

    while (curpos < strlen(s1))
    {
        if (!(s1[curpos] == 'a' || s1[curpos] == 'e' ||
              s1[curpos] == 'o' || s1[curpos] == 'i' ||
              s1[curpos] == 'u' || s1[curpos] == 'y'))
        {
            s1[newpos] = s1[curpos];
            newpos++;
        }
        curpos++;
    }
    s1[newpos] = '\0';
    printf("s1: %s\n", s1);
    return 0;
}

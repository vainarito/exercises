#include <stdio.h>
#include <string.h>
int convert(char *string);

int main(void)
{
    char s1[] = "1101";
    printf("Number in binary code: %s\n", s1);
    int val = convert(s1);
    printf("Number in decimal code: %d\n", val);
    return 0;
}

int convert(char *string)
{
    int slen = strlen(string);
    int total = 0;
    int decval = 1;
    for (int i = (slen - 1); i >= 0; i--)
    {
        if (string[i] == '1')
            total += decval;
        decval *= 2;
    }
    return total;
}

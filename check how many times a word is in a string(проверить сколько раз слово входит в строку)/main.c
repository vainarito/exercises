#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word);

int main(void)
{
    char s[] = "This is in in in the word.";
    char s2[] = "in";
    int result = word_count(s, s2);
    printf("String: %s\nWord: %s", s, s2);
    printf("\nResult: %d\n", result);
    return 0;
}
int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {
        bool word_found = true;
        for (int j = 0; j < wlen; j++)
        {
            if (word[j] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found)
            count++;
    }
    return count;
}

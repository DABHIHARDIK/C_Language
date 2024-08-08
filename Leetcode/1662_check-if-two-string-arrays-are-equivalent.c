#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size)
{
    char word[1500];
    char wordd[1500];
    memset(word , 0 , strlen(word));
    memset(wordd ,0 , strlen(wordd));

    int i = 0;
    for (i = 0; i < word1Size; i++)
    {
        strcat(word , word1[i]);
    }

    for (i = 0; i < word2Size; i++)
    {
        strcat(wordd, word2[i]);
    }


    return !strcmp(word,wordd);
}

int main()
{
    char word1[] = "ab";
    char word2[] = "c";

    char word3[] = "a";
    char word4[] = "bc";

    char *word5[2];

    word5[0] = word1;
    word5[1] = word2;

    char *word6[2];
    word6[0] = word3;
    word6[1] = word4;

    printf("%d",  arrayStringsAreEqual(word5, 2, word6, 2));

    return 0;
}
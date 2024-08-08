#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *truncateSentence(char *s, int k)
{
    int count = 0,i;
    for (i = 0; count < k ; i++)
    {
        if (  s[i]=='\0' ||s[i] == 32)
        {
            count++;
        }
    }
    s[i-1]='\0';
    return s;
}

int main()
{
    char str[] = "hello how are you contentset";
    int k = 4;
    truncateSentence(str, k);
    return 0;
}
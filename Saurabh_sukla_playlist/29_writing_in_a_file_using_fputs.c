#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[20];
    printf(" enter your name ");
    FILE *fp;

    fp = fopen("29_writing_fputs.txt", "a");

    if (fp == NULL)
    {
        printf(" file not opened ");
        exit(1);
    }
    gets(str);
    fputs(str, fp);
    fclose(fp);

    return 0;
}
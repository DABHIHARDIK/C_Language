#include <stdio.h>
#include<stdlib.h>

int main()
{

    FILE *fp;
    fp = fopen("27_file_read.txt", "r");
    if (fp == NULL)
    {
        printf(" file not exist");
        exit(1);
    }
    char ch; 
    ch = (char)fgetc(fp);
    while( !feof(fp)){ // feof is sunction that return file end char 0 or 1
        printf( "%c",ch);
        ch = (char)fgetc(fp);
    }
    fclose(fp);
    return 0;
}
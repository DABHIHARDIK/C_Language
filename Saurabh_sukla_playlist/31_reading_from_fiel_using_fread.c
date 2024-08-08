#include <stdio.h>
#include <stdlib.h>

/*

fread( function is used to read content from file in binary mode)

int fread( void *buffer,int Size , int count , FILE *ptr);


*/

struct book
{

    int bookid;
    char title[20];
    float price;
};
int main()
{

    struct book b1;
    FILE *fp;
    fp = fopen("30_fwrite.dat", "rb"); // rb --> read in binary mode

    if (fp == NULL)
    {
        printf(" File is not exist");
        exit(1);
    }

    while (fread(&b1, sizeof(b1), 1, fp) > 0) // fread return int value is next value is there then it retur 1 is value is not present then it will return 0 
    {
        printf(" %d %s %f \n", b1.bookid, b1.title, b1.price);
    }
    fclose(fp);
    return 0;
}
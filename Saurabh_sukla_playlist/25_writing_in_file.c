#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//write a program to write hello studentd in file 
// write a progema to take string from user and write it into a file

int main(){
long long unsigned int i = 0 ; 
FILE *fp ; 
fp = fopen("25_file.txt","w");
char s[]="hello students";
if ( fp == NULL)
    {
        printf( " File is not opened ");
        exit(1);
    }

for( i = 0 ; i < strlen(s);i++){
    fputc(s[i],fp);
    printf("%c",s[i]);
}
fclose(fp);

    return 0 ; 
}
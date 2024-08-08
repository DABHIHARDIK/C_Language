#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
fwrite() function is used to write content to the file in binary mode

fwrite(void *Buffer, int Size , int count , FILE *ptr );
void *Buffer --> pass the address whatever you want to wrtie in file 
int Size --> whatever you passed in 1st argument mention size here you can use sizeof() also 
int count --> how may count you want to write 
FILE *ptr --> file pointer 

*/
struct book {
int bookid; 
char title[20];
float price; 

};

int main(){
struct book b1 ; 
FILE *fp ; 
fp = fopen("30_fwrite.dat","ab");//wb --> Binary mode we will use fwrite function and that function open in binary mode so we have to open this file in binary mod e
// if you open in banary mode then it store as you want other wise if you want to open in txt mode then \n means new line but in binary mode write as is teas
printf( " enter a bookid, tile and price");
scanf( "%d",&b1.bookid);
fflush(stdin);
strcpy(b1.title,"hardik third "); // scanf is not work if you enter "hardik dabhi" in scanf it will take hardik only in scanf space is terminater
printf( " enter book price");
scanf( "%f",&b1.price);
fwrite( &b1, sizeof(b1),1,fp);
fclose(fp);
    return 0 ; 
}
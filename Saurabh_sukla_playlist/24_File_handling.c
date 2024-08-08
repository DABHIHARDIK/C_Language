#include<stdio.h>

/* 
0> File Handling --> store(writting) the data and take(reading ) the data that called file handling 

if want to something in file then you need to first open the file 

FILE is a structure ( non primitive(user difined data types) data type )

typedef struct{
short level;
unsigned flags ; 
char fd ; 
unsigned char hold;
short bsize; 
unsigned char *buffer; 
unsigned char *curp ; 
unsigned istemp; 
short token; 
} FILE ; 

*/
int main(){

FILE *fp ;
fp = fopen( "task.txt",'r'); 

    return 0 ; 
}
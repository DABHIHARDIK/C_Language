#include<stdio.h>
#include<stdlib.h>

/* 
fgets() is a function to read string from a file 

fgets( str, n , fp ); 
str --> name of string 
n --> number of string lenght 
fp --> which file 

fgets returns a NULL value when it reads EOF

*/

int main(){

char str[10];
FILE *fp ;

fp = fopen("28_.txt","r");
if(fp == NULL)
{
printf( " file not found");
exit(1);
}
while (fgets( str , 9 , fp )!= NULL)        
{
    printf( "%s", str);
}


fclose(fp);
    return 0 ; 
}
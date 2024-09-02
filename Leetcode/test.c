 #include<stdio.h> 
 #include<stdlib.h>
#include<string.h> 
 int main(){
char *ptr = (char *)malloc(sizeof(char)* 5);
ptr[0] = 'a';
ptr[1] = 'b';
ptr[2] = ' ';
ptr[3] = 'c';
ptr[4] = '\0';

strrev(ptr);
printf("%s",ptr);

    return 0 ; 

 }



/*
0> malloc() vs calloc()

    malloc(4 ) -->it will make 4-bytes memory block in memory by default garbeg value 
    calloc(5,2) --> it will make 5 block of 2 bytes(array) in memory by default 0 
    realooc( pointer_name , bytes) --> it change size of memory block whatever mmade by malloc and calloc only 
*/

#include<stdio.h>

int main(){

int x ; //local variable SMA 
int *p = malloc(2); // DMA variable memory not distroyed when function end it will distroy when progrma end 
free(p); // so we need to free DMA memory otherwise memory not free 
    return 0 ;
}
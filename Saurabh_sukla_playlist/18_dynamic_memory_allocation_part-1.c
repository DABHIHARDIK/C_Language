/*
what is static and dynamic memmory allocation

0> SMA(static memory allocation )

int a ; --> SMA (static memory allocation) its define direct define with decelaration statment 
float b ; --> run time memory allocation (its define in compaile time how many memory allocation )

0> DMA (dynamic memory allocation )

DMA variable assign with address only 
Run time allocation that called DMA 


0> How to assign memory in DMA 

malloc()
calloc()
realloc()
free()

*/

#include<stdio.h>
#include<stdlib.h>


int main(){


int *p; 
p = ( int* )malloc(4); // malloc return type is void so we need to type cast to perticular data types
*p = 10 ;
printf( " %d",*p );
    return 0;
}
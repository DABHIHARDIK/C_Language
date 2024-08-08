#include<stdio.h>
#include<stdlib.h>

// void f1();

// int main(){
 
// f1();
// f1();

// }

// void f1(){
//     static int i; // Default value is 0 
//     i++; 
//     printf( "%d\n",i);
// }


int main(){

    extern int x ;
    extern void f1();       
    printf( " %d\n ",x ); 
    f1();
}

int x = 5 ; // extern use this variable 

extern void f1(){
    printf(" extern it will work ");
}


/* 

*/

#include<stdio.h> 
#include<stdlib.h> 

void fun( void );

int main(){

    return 0; 
}

void fun(){

    int *p ; 
    {
    int x ; 
    p = &x;
    p = NULL; // solution of dangling pointer 
        // after complation work assign NULL value in pointer 
    }
    // after complition of block x will distroied still p is pointing to some location that called dangling pointer 

}
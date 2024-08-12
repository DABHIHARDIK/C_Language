/*
0> What is Wild pointer ?? 
    -  unintialized pointer or wild pointer 
*/

#include<stdio.h>


int main(){

    int *p ; // unintialized pointer that called wild pointer 
    // in *p some garbage value is there so it is pointing to some free space or may be consumed memory we dont know that types pointer called wild pointer 
    // so take care when pointer declaration that time intialized pointer also 
    return 0; 
}
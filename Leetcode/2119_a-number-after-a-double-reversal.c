#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h> 


bool isSameAfterReversals(int num) {
    if(num == 0 )
        return true;
    if(num % 10 == 0)
        return false ;
    return true;
}
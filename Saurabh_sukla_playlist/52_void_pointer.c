#include<stdio.h>
#include<stdlib.h>

/* 
0> Void pointer or Generic pointer both are same 
    - int *p; 
    - float *p ; 
     pointer contains same data types 

    - But in Void pointer contains any types of datatypes value 

    void &ptr;  
    int x = 0 ; 
    ptr = &x ; 
        - we have to assign some things in your variable then we can't assign deriectly in void pointer ' 
    
    - So we need to typecast the pointer 
        - *(int *)p = 10 ; 
*/

int main(){
int x = 0 ; 
void *ptr; // Declaration of void pointer
ptr = &x ;
*(int *)ptr = 10 ; // assign value in pointer 
printf(" x value is %d \n",x);


float y = 0.0 ;
ptr = &y;
*(float * )ptr = 4.6 ; // assign value in pointer 
printf(" y value is %f\n",y);


    return 0;
}
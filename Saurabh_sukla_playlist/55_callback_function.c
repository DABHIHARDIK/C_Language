#include<stdio.h>


void A1(){
    printf("you are in A1\n");
}


void A2(){
    printf("you are in A2");
}

void B( void (*p)()){

    (*p)();
}
int main(){
    B(A1);
    B(A2);
    return 0 ; 
}
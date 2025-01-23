#include<stdio.h> 

int main(){

    void *ptr ; 

    int x = 10 ; 

    ptr = (int *)&x;

    printf("%d",*(int*)ptr);
    return 0 ; 
}
#include<stdio.h>
#include<stdlib.h>

void fun(int p[]){
    int temp[] = p ;
    printf("%d",sizeof(temp)/sizeof(temp[0]));
    
}


int main(){

int a[5]={1,2,3,4,5};
fun(a);    
    return 0 ; 
}
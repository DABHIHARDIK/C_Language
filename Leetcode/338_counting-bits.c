#include<stdio.h> 
#include<stdlib.h> 

int countones(int data){
    int count = 0 ;
    while(data > 0){
        if(data & 1 == 1)
            count++;
        data >>= 1;
    }
    return count;
}
int* countBits(int n, int* returnSize) {
    int *ptr = (int *)malloc(sizeof(int) * n+1);
    ptr[0] = 0 ;
    for(int i = 1; i < n ;i++){
        ptr[i] = countones(i);
    }
    return ptr;
}

int main(){
    int size  = -1; 
    countBits(2 , &size);
}